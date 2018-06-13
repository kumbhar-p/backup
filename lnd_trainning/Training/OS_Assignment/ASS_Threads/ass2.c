/* 2. Write a program to do the following
a. Process creating a process
b. Process creating a thread
c. Thread creating a process
d. Thread creating a thread  */


#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *fun(void *p);
void *fun1(void *p);

int main(void)
{
	pthread_t t1;
	int status;
	void **ptr;
	
	status = pthread_create(&t1, NULL, fun, NULL);
	if(status != 0) {
		perror("thread failed");
		exit(0);
	}

    pthread_exit("namasthe");
	return 0;
}

void *fun(void *p)
{
    pthread_t t2;
    void **ptr1;
    int status1;

    printf("in thread 1\n");

    status1 = pthread_create(&t2, NULL, fun1, NULL);
    if(status1 != 0) {
        perror("thread failed");
        exit(0);
    }
}

void *fun1(void *p)
{
	pid_t pid;
	pid = fork();

    printf("in thread 2\n");
	
	if(pid > 0) {
		printf("In parent process\n");
	}
	else if(pid == 0) {
		printf("In child process\n");
	}
	else 
		printf("fork failed\n");
		
}

