#include"headers.h"
int input_dub_inser_big(void)
{
    char ch;
    do{
        dub_add_big(&head1);
        printf("continue:");
        getchar();
        ch = getchar();
    }while(ch == 'y');
    return 0;
}
int dub_add_big(struct tag1 **p)
{
    struct tag1 *temp = NULL;
    temp = malloc(sizeof(struct tag1));
    if(temp = NULL){
        printf("malloc failed:");
        return 0;
    }
    printf("enter roll double:");
    scanf("%d",&temp->roll);
    if(*p == 0){
        printf("in if:\n");
        *p= temp;
    }
    else{
        temp->next = *p;
        (*p)->prev = temp;
        *p = temp;
    }

    return 0;


    //    temp->next = NULL;
    //	temp->prev = NULL;
    //	*p = temp;

}













