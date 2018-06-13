/*  3. Write a program to create a thread using pthread_create() and experiment the following 

    pen a text file “just.txt” in the context of TGL before issuing pthread_create()
    After invoking pthread_create(), in the TGL context, write the string “Global Edge” on to
    the file and close the file.
    In the thread context write “Software limited” on to the file and close the file.
    Cat the file just.txt and draw your inferences by looking at the output.
*/

#include<stdio.h>
#include<pthread.h>

void *thread_fun();

int a = 10;

int main(void)
{
	int status;
	pthread_t th_id;
	FILE *fp;

	fp = fopen("data","w");

	status = pthread_create(&th_id, NULL, thread_fun, NULL);
	if(status != 0) {
		printf("thread failed : %d\n", status);
	}
	fprintf(fp "%s","Global Edge");
	fclose(fp);

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

