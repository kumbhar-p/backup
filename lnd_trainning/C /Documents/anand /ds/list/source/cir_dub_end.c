#include"headers.h"
int cir_dub_end(void)
{
    char ch;
    do{
        cir_dub_add_end(&head1);
        printf("continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;
}
int cir_dub_add_end(struct tag1 **p)
{

    struct tag1 *temp = NULL;
    struct tag1 *temp1 = *p;
    temp = malloc(sizeof(struct tag1));
    if(temp == NULL){
        printf("malloc failed:\n");
        return 0;
    }
    printf("enter roll:");
    scanf("%d",&temp->roll);
    temp->next = NULL;
    temp->prev=NULL;
    if(*p == 0)
    {
        *p = temp;
        (*p)->next = *p;
    }
    else{
        while(temp1->next  != *p)
            temp1= temp1->next;
        temp->next = temp1->next;
        temp1->next = temp;
        temp->prev = temp1;

    }
    return 0;

}

