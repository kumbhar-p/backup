#include"headers.h"
int dub_mid(void)
{
    struct tag1 *temp1 = NULL;
    struct tag1 *temp2 = NULL;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
    scanf("%d",&pos);
    do{
        dub_add_big(&head1);
        printf("continue:");
        getchar();
        ch = getchar();
        count++;
    }while(ch =='y');
    temp1 = head1;
    if(count < pos){
        printf("invalid position:");
        return 0;
    }
    else{
        while(pos > count2){
            printf("value = %d",temp1->roll);
            temp1 = temp1->next;
            count2++;
        }
        temp2 = malloc(sizeof(struct tag1));
        if(temp2 == NULL){
            printf("malloc failed:\n");
            return 0;
        }
        printf("\nenter value to insert:");
        scanf("%d",&temp2->roll);
        temp2->prev = temp1->prev;
        temp1 ->prev->next = temp2;
        temp2->next = temp1;
        temp1->prev = temp2;
    }
    return 0;
}
