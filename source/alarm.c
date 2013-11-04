#include <stdio.h>
#include <stdlib.h> //to use exit
#include <unistd.h> //from alarm(2) Linux man page
#include <signal.h> //from signal(2) Linux man page

void handler(int); //this is the signal handler
int alarmloop(int, int);

void handler(int sig)
{
	printf("Signal handler caught the alarm signal\n");
}

int main(int argc, char *argv[])
{
	int interval, count, state;
	//check command line arguments - we should have 3
	if(argc != 3){
		printf("Usage: alarm <number of seconds for waiting> <number of loops>\n");
		exit(1);
	}

	interval = atoi(argv[1]); //atoi to convert from cmdline args to integers
	count = atoi(argv[2]);

        //for different signals see signals(7) in Linux man page
        while(count != 0){
		signal(SIGALRM, handler); //I send a signal called SIGALARM
        	printf("Sent alarm signal\n"); 
		alarm(interval);
<<<<<<< HEAD
                printf("Pausing\n");
=======
>>>>>>> Testing git-fat with binaries
		pause();
		count--;
	}
}
