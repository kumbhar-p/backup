#include    <stdio.h>
#include    <sys/stat.h>
#include    <semaphore.h>
#include    <sys/mman.h>
#include    <sys/stat.h>
#include    <fcntl.h>
#include    <stdlib.h>
#include    <string.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

typedef struct st {
    sem_t sem,sem1;
    char buf1[100];
    char buf2[100];
    int count;
}semaphore;

int main()
{
    pid_t pid;
    semaphore *ptr = NULL;
    int sem_fd;
    int fd;
    
    if(-1 == (fd = shm_open("/shm312", O_RDWR | O_CREAT | O_TRUNC,0777)))
        handle_error("shm_open");
    
    if(-1 == (ftruncate(fd, 4096)))
        handle_error("ftruncate");

    int *map = NULL;
    if(NULL == (ptr = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0)))
        handle_error("mmap");
    
//    if(-1 == (sem_fd = sem_init(&ptr -> sem1, 1, 1)))
  //      handle_error("sem_init");
    
    pid = fork();
    if(pid > 0) {
    while(1) {
        sem_wait(&(ptr -> sem));
        printf("the message from server :%s\n",ptr->buf1);
          sem_post(&(ptr -> sem));
		  sem_post(&ptr->sem1);
		usleep(10);
    }
    }
    else {
        while(1) {
            sem_wait(&(ptr -> sem1));
            printf("enter message:\n");
            fgets(ptr->buf2,100,stdin);
            sem_post(&(ptr ->sem1));
		usleep(10);
        }
    }
    munmap(NULL, 4096);
}
