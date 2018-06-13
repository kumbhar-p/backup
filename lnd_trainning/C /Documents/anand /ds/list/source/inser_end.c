#include"headers.h"
int input_inser_end(void)
{
    char ch;
    do{
        add_end(&head);
        printf("continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;

}
int add_end(struct tag **p)
{
    struct tag *temp = NULL;
    struct tag *temp1 = *p;
    temp = malloc(sizeof(struct tag));
    if(temp == NULL){
        printf("malloc failed:\n");
        return 0;
    }
    printf("enter roll:");
    scanf("%d",&temp->roll);
    if(*p == 0)
    {
        *p = temp;
    }
    else{
        while(temp1->link)
        {
            temp1 = (temp1)->link;
        }
        temp1->link = temp ;
    }
    return 0;

}


