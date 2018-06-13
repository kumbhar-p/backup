#include <pthread.h>
#include <mqueue.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)


int
main(int argc, char *argv[])
{
    mqd_t mqdes;
    int snd;
     struct timespec abs_timeout;
    struct mq_attr setattr;
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <mq-name> <mq-message>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    
    setattr.mq_maxmsg = 3;
    setattr.mq_msgsize = 10;

    mqdes = mq_open(argv[1], O_CREAT | O_WRONLY, 0777, &setattr);
    if (mqdes == (mqd_t) -1)
        handle_error("mq_open");
    printf("Message queue created successfully mqid = %d\n", (int) mqdes);

    abs_timeout.tv_sec = time(NULL) + 10;
    abs_timeout.tv_nsec = 0;
        
    if ((snd = mq_timedsend(mqdes, argv[2], strlen(argv[2]),1, &abs_timeout)) == -1)
        handle_error("mq_timedsend");

    printf("Message sent successfully snd = %d\n", snd);


    if (mq_close(mqdes) == -1)
        handle_error("mq_close");

    return 0;
}

