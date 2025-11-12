#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <signal.h>
#include <sys/signal.h>

void alarm_handler(int signum){
	printf("Buzz Buzz Buzz\n");


}

int main(){

	signal(SIGALRM, alarm_handler);

	alarm(10);

	alarm(1); 
	while(1){
		pause();
		alarm(1);
	}

}

