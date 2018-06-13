#include"headers.h"
int count;
int pop(struct tag **p)
{
    struct tag *temp;
    temp = *p;
    count--;
    *p = (*p)->link;
    free(temp);
    return 0;
}



