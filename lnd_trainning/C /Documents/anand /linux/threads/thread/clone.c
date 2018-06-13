#define _GNU_SOURCE
#include <sys/wait.h>
#include <sys/utsname.h>
#include <linux/sched.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/syscall.h>
#define STACK_SIZE 1024*1024
int fun (char *ptr)
{
	printf("i am in function:\n");
	printf("pass = %s\n",ptr);
	printf("thread process id pid = %d\n",getpid());
	printf("thread id tid = %d\n",(unsigned int )syscall(SYS_gettid));
}
int main(int argc , char **argv)
{
	printf("parent process id = %d\n",getpid());
	int value;
	char *stacktop;
	char *stack;
	stack = malloc(STACK_SIZE);
	stacktop = stack + STACK_SIZE;
//	value = clone(fun,stacktop,(CLONE_FILES|CLONE_FS|CLONE_VM )/*SIGCHLD*/,"anand"); // clone  creating a process
	value = clone(fun,stacktop,(CLONE_FILES|CLONE_FS|CLONE_VM|CLONE_SIGHAND|CLONE_THREAD ),NULL); //  clone creating a thread
	
	sleep(4);
		


}
