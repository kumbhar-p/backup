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

int main()
{
    pid_t pid;
//    semaphore *ptr = NULL;
    int fd;
    char snd_buf[50];
    char rec_buf[50];
    sem_t *ret_addr;
    char *ptr = NULL;
    
    if(-1 == (fd = shm_open("/shm312", O_RDWR | O_CREAT | O_TRUNC,0777)))
        handle_error("shm_open");
    
    if(-1 == (ftruncate(fd, 4096)))
        handle_error("ftruncate");
		sem_unlink("/sem1234");
       ret_addr = sem_open("/sem1234",O_CREAT|O_RDWR,0777,1);

    int *map = NULL;
    if(NULL == (ptr = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0)))
        handle_error("mmap");
    pid = fork();
    if(pid > 0) {
    while(1) {
        sem_wait(ret_addr);
        printf("Enter the message: \n");
        fgets(ptr, 100, stdin);
        sem_post(ret_addr);
		usleep(10);
        }
    }
    else {
        while(1) {
            sem_wait(ret_addr);
            printf("message from client: %s\n",ptr+100);
            sem_post(ret_addr);
		usleep(10);
        }
    }
    munmap(NULL, 4096);
}
