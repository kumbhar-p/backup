#include"headers.h"
int print(struct tag *p)
{
    printf("********************************************\n");
    while(p){
        printf("no:->%d ",p->roll);
        p = p->link;
    }
    printf("\n********************************************\n");
    return 0;
}

int print1(struct tag1 *p)
{
    printf("*********************************************\n");
    while(p) {
        printf("no:->%d ",p->roll);
        p = p->next;
    }
    printf("\n*********************************************\n");
    return 0;
}
