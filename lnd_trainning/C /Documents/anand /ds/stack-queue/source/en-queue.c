#include"headers.h"
int count;
int en_queue(struct tag **p)
{
    struct tag *temp1 = NULL;
    struct tag *temp = *p ;
    char ch;

    do{
        temp = *p;
        temp1 = malloc(sizeof(struct tag));
        if(temp1 == NULL){
            printf("malloc failed:\n");
        }
        printf("enter the data:");
        temp1->roll = myatoi();
        if(*p == 0){
            *p = temp1;
            count++;
        }
        else {
            while(temp->link != NULL)
                temp = temp->link;
            temp->link = temp1;
            count++;
        }
        if(count == MAX){
            printf("*********queue is full******\n");
            return 0;
        }
        printf("do you want to continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;

}
int print1(struct tag *p)
{
    if(count == 0)
        printf("*****queue is empty*****\n");
    while(p){
        printf("no:->%d ",p->roll);
        p = p->link;
    }
    putchar('\n');
    return 0;
}














