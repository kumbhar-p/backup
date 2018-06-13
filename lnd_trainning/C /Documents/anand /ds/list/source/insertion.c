#include"headers.h"
int input_inser_big(void)
{
    char ch;
    do{
        add_big(&head);
        printf("continue:");
        getchar();
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
        return 0;
    }
    printf("enter roll:");
    scanf("%d",&temp->roll);
    temp->link = *p;
    *p = temp;
    return 0;
}

