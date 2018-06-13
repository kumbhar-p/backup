#include <pthread.h>
#include<stdio.h>
#include<stdlib.h>
//#include "tlpi_hdr.h"
static int glob = 0;
//static void *
/* Loop 'arg' times incrementing 'glob' */
void *threadFunc(void *arg)
{
   //nt loops = *((int *) arg);
    printf("in thread \n");
    int loc, j;
    for (j = 0; j < 100000; j++) {
        loc = glob;
        loc++;
        glob = loc;
    }
    printf("leaving thread \n");
    return NULL;
}
/*
void *threadFunc1(void *p)
{
    printf("in thread 2\n");
    printf("leaving thread 2\n");
}*/
int main(void)
{
    pthread_t t1, t2;
    int s;
    s = pthread_create(&t1, NULL, threadFunc, NULL);
    if(s != 0) {
        perror("thread failed");
        exit(0);
    }
    s = pthread_create(&t2, NULL, threadFunc, NULL);
    if(s != 0) {
        perror("thread failed");
        exit(0);
     }
    s = pthread_join(t1, NULL);
    if(s != 0) {
        perror("join failed");
        exit(0);
    }
    s = pthread_join(t2, NULL);
    if(s != 0) {
        perror("join failed");
        exit(0);
     }
    printf("glob = %d\n", glob);
    pthread_exit(NULL);
}
