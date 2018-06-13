#include    <stdio.h>
#include    <sys/stat.h>
#include    <semaphore.h>
#include    <sys/mman.h>
#include    <sys/stat.h>
#include    <fcntl.h>
#include    <stdlib.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

typedef struct st {
    sem_t sem;
    int count;
}semaphore;

int main()
{
    semaphore *ptr = NULL;
    int sem_fd;
    int fd;
    
//    if(NULL == (ptr = (semaphore*)malloc(sizeof(semaphore))))
  //      handle_error("malloc");
    
    if(-1 == (fd = shm_open("/shm3", O_RDWR | O_CREAT ,0777)))
        handle_error("shm_open");
    
    if(-1 == (ftruncate(fd, 4096)))
        handle_error("ftruncate");

    int *map = NULL;
    if(NULL == (ptr = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0)))
        handle_error("mmap");
    
//    if(-1 == (sem_fd = sem_init(&ptr -> sem, 1, 1)))
  //      handle_error("sem_init");
    sem_wait(&(ptr -> sem));
    printf("count = %d \n", ptr->count);
    sem_post(&(ptr -> sem));
//    sem_destroy(&(ptr -> sem));

    munmap(NULL, 4096);
}
