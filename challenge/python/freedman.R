library(dplyr)
library(broom)
library(ggplot2)
library(tidyr)
library(data.table)
setDTthreads(4)
set.seed(20170605)


options(datatable.fread.datatable=FALSE)

###### Step 1

n_row <- 512
# n_col is set to 51 because the 51st column will serve as y
n_col <- 129
n_rep <- 8192

## a stack of matrices for all n_rep repetitions is generated...
#X <- matrix(rnorm(n_rep * n_row * n_col), n_rep * n_row, n_col)
#colnames(X) <- paste0("X", 1:n_col)
# ...and then transformed to a data frame with a repetition number column
#X_df <- as_data_frame(X) %>% mutate(repetition = rep(1:n_rep, each = n_row))

X_df <- fread(
  file = "/srv/freedman.dat",
  header = FALSE, col.names = paste0("X", 1:n_col),
  showProgress = TRUE
)
X_df <- X_df %>% mutate(repetition = rep(1:n_rep, each = n_row))


###### Step 2

# all models can be fit at once...
models_df = X_df %>% group_by(repetition) %>%
  do(full_model = lm(X129 ~ . + 0, data = select(., -repetition)))
# ...then the results are extracted
model_coefs <- tidy(models_df, full_model)
model_statistics <- glance(models_df, full_model)
model_statistics$data_reuse <- rep(FALSE, nrow(model_statistics))



###### Step 3

reduced_models <- list()
for (i in 1:n_rep) {
  print(i)
  full_data <- X_df %>% filter(repetition == i)
  significant_coefs <- model_coefs %>%
    filter(repetition == i & p.value < 0.25)
  reduced_data <- select(full_data,
                         one_of(unlist(significant_coefs[ , "term"])), X129)
  reduced_models[[i]] <- lm(X129 ~ . + 0, data = reduced_data)
  tmp_df <- glance(reduced_models[[i]])
  tmp_df$repetition <- i
  tmp_df$data_reuse <- TRUE
  model_statistics <- bind_rows(model_statistics, tmp_df)
}



###### Step 4

model_statistics %>%
  select(r.squared, p.value, statistic, repetition, data_reuse) %>%
  mutate(data_reuse = ifelse(data_reuse, "With Data Reuse", "Without Data Reuse")) %>%
  mutate(data_reuse = factor(data_reuse, levels = c("Without Data Reuse", "With Data Reuse"),
                             ordered = TRUE)) %>%
  rename("F-statistic" = statistic, "p-value" = p.value, "R squared" = r.squared) %>%
  gather(stat, value, -repetition, -data_reuse) %>%
  ggplot(aes(x = stat, y = value)) +
  geom_violin(aes(fill = stat), scale = "width", draw_quantiles = c(0.25, 0.5, 0.75)) +
  geom_hline(yintercept = 0.05, linetype = 2, size = 0.3) +
  facet_wrap(~data_reuse) +
  theme_linedraw() +
  scale_y_continuous(breaks = c(0.05, 2, 4, 6)) +
  ggtitle(paste(n_rep, "repetitions of an LM fit with", n_row, "rows,", n_col, "columns"))

