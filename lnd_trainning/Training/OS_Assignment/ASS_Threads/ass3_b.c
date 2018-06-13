/*  3. Write a program to create a thread using pthread_create() and experiment the following 
	will both Thread Group Leader (TGL) and the thread share the same global data ?
// Ans - sharing local data not possible
*/

#include<stdio.h>
#include<pthread.h>

void *thread_fun();

int a = 10;

int main(void)
{
	int status;
	pthread_t th_id;
	
	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	
//	getchar();
	printf("a in main = %d\n", a); 
	printf("in main addr of a : %p\n", &a);
	pthread_exit(NULL);	
	return 0;
}

void *thread_fun()
{
	printf("i am in thread function\n");
	a = a+10; 
	printf("in function addr of a : %p\n", &a);
	printf("a in fun - %d\n",a);
    return NULL;
}

