#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define N 20


void* fun(void*);

//pthread_mutex_t lockk = PTHREAD_MUTEX_INITIALIZER;
typedef struct st1{
  pthread_mutex_t mutex;
  int val;
}my_struct_t;

int main(){
  pthread_t th_id;
  int i;
  void* return_val;

  my_struct_t *data;
    data = malloc(sizeof(my_struct_t));
    data->val = 20;
    pthread_mutex_init(&data->mutex,NULL);
	pthread_create(&th_id,NULL,fun,NULL);
	pthread_exit(NULL);

}

void* fun(void* p){
  int i;
	printf("in sub thread:\n");
  return NULL;
}
