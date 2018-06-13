#include"headers.h"
int count = 0;
int push(struct tag **p)
{
    struct tag *temp1 = *p;
    char ch;

    do{
        temp1 = malloc(sizeof(struct tag));
        if(temp1 == NULL){
            printf("malloc fail:");
            return 0;
        }
        printf("enter the data:");
        temp1->roll = myatoi();
        temp1->link = *p;
        *p = temp1;
        count++;
        if(count == MAX){
            printf("*********stack is full******\n");
            return 0;
        }
        printf("do you want to continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;

}
int print(struct tag *p)
{
    if(count == 0)
        printf("*****stack is empty*****\n");
    while(p){
        printf("no:->%d ",p->roll);
        p = p->link;
    }
    putchar('\n');
    return 0;
}

