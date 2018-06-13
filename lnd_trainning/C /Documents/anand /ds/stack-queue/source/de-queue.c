#include"headers.h"
int count;
int de_queue(struct tag **p)
{
    if(count == 0){
        printf("******queue is empty******\n");
        return 0;
    }
    *p = (*p)->link;
    count--;

    return 0;
}

