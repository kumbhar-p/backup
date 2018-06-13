#include"headers.h"
int cir_inser_big(void)
{
    char ch;
    do{
        cir_add_big(&head);
        printf("continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;
}
int cir_add_big(struct tag **p)
{

    struct tag *temp = NULL;
    struct tag *temp1 = NULL;
    temp = malloc(sizeof(struct tag));
    if(temp == NULL){
        printf("malloc failed:\n");
        return 0;
    }
    printf("enter roll:");
    scanf("%d",&temp->roll);
    if(*p == 0){
        (*p) = temp;
        (*p)->link = *p;
    }
    else{
        temp1=*p;
        while(temp1->link != *p)
            temp1 = temp1->link;
        temp1->link = temp;
        temp->link = *p;
        *p= temp;
    }
    return 0;  
}













