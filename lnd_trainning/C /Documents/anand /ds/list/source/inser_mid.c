#include"headers.h"
int inser_mid(void)
{
    struct tag *temp1 = NULL;
    struct tag *temp2 = NULL;
    int pos;
    int count = 0;
    int count2  = 1;
    char ch;
    printf("enter the position:");
    scanf("%d",&pos);
    do{
        add_big(&head);
        printf("continue:");
        getchar();
        ch = getchar();
        count++;
    }while(ch == 'y');
    temp1 = head;
    if(count < pos){
        printf("invalid position:");
        return 0;
    }
    else{
        while(pos > count2+1){
            printf("value = %d",temp1->roll);
            temp1 = temp1->link;
            count2++;
        }
        temp2 = malloc(sizeof(struct tag));
        if(temp2 == NULL){
            printf("malloc failed:\n");
            return 0;
        }
        printf("\nenter value to insert:");
        scanf("%d",&temp2->roll);
        temp2->link = temp1->link;
        temp1 ->link = temp2;

    }
    return 0;
}
