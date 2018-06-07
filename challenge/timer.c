#include "defs.h"

// #include<iostream>
// #include <string>
// using namespace std;

/*

	C implementation of a timer structure

*/
// We declare a type "SimpleTimer_t" as struct SimpleTimer
// This allows us to create timers in a simple syntax as:
// SimpleTimer t1;
typedef struct SimpleTimer SimpleTimer_t;
// Notice that we added a suffix "_t" for the type. This is
// a convention but it is not required

struct SimpleTimer{
	struct timeval start_time;
	struct timeval stop_time;
};

void SimpleTimer_start( SimpleTimer_t *thisT ){
	gettimeofday( &( thisT -> start_time ), NULL );
	thisT -> stop_time = thisT -> start_time;
};
void SimpleTimer_stop( SimpleTimer_t *thisT ){
	gettimeofday( &( thisT -> stop_time ), NULL );
};
void SimpleTimer_print( SimpleTimer_t *thisT ){
	printf("Time elapsed (msec): %lf\n",
		(( (thisT -> stop_time).tv_sec - (thisT -> start_time).tv_sec ) * 1000000LL +
		(thisT -> stop_time).tv_usec - (thisT -> start_time).tv_usec) * 0.001
	);
};



// /*

// 	C++ implementation of a timer structure

// */
// class SimpleTimerCPP{
// private:
// 	timeval start_tv,end_tv;
// 	long long start_time;
// 	long long end_time;
// 	double Msec,msec,sec;
// 	string tag;
// public:
// 	void restart(){	gettimeofday(&start_tv,NULL);	gettimeofday(&end_tv,NULL);	};
// 	void stop(){
// 		gettimeofday(&end_tv,NULL);
// 		start_time=start_tv.tv_sec*1000000LL+start_tv.tv_usec;
// 		end_time=end_tv.tv_sec*1000000LL+end_tv.tv_usec;
// 		Msec=1.0*(end_time-start_time);
// 		msec=Msec*0.001;
// 		sec=msec*0.001;
// 	};
// 	double delta_Ms(){ return Msec; };//Microseconds
// 	double delta_ms(){ return msec; };
// 	double delta_s(){ return msec; };
// 	void print_Ms(){
// 		cout<<tag<<"\t"<<Msec<<" Ms"<<endl;
// 	};
// 	void print_ms(){
// 		cout<<tag<<"\t"<<msec<<" ms"<<endl;
// 	};
// 	void print_s(){
// 		cout<<tag<<"\t"<<sec<<" s"<<endl;
// 	};
// 	SimpleTimerCPP(){
// 		tag="(SimpleTimerCPP)";
// 		restart();
// 	};
// 	SimpleTimerCPP(string tag0){
// 		tag=tag0;
// 		restart();
// 	};
// 	~SimpleTimerCPP(){};
// };
