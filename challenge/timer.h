typedef struct SimpleTimer SimpleTimer_t;
struct SimpleTimer{
	struct timeval start_time;
	struct timeval stop_time;
};
void SimpleTimer_start( SimpleTimer_t *thisT );
void SimpleTimer_stop( SimpleTimer_t *thisT );
void SimpleTimer_print( SimpleTimer_t *thisT );
