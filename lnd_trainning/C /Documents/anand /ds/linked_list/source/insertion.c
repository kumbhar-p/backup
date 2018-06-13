#include"headers.h"
int input_inser_big(void)
{
    char ch;
    do{
        add_big(&head);
        printf("do you want to continue:");
        __fpurge(stdin);
        ch = getchar();
    }while(ch == 'y');
    return 0;
}
int add_big(struct tag **p)
{
    struct tag *temp = NULL;
    temp = malloc(sizeof(struct tag));
    if(temp == NULL){
        printf("malloc failed:\n");
    }
    printf("enter roll:");
    __fpurge(stdin);
    temp->roll = myatoi();
    temp->link = *p;
    *p = temp;
    return 0;
}
