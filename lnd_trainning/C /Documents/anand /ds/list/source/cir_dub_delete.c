#include"headers.h"
int cir_dub_delete(void)
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
        cir_dub_add_big(&head1);
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

        if(pos == 1){
            temp2=head1;
            while(temp1->next != head1){
                temp1 = temp1->next;
            }
            temp1->next = temp2->next;
            free(temp2);
        }
        else{
            temp1=head1;
            while(pos > count2+1){
                printf("value = %d",temp1->roll);
                temp1 = temp1->next;
                count2++;
            }
            temp2 = temp1->next;
            temp1->next = temp1->next->next;
            free(temp2);

        }
    }

    return 0;

}


