#include"headers.h"
int queue(void)
{
    int ch;
    while(1){
        printf("1.en-queue\n2.de-queue\n3.display\n");
        printf("enter ur choice:");
        ch = myatoi();
        switch(ch){
            case 1:
                en_queue(&head);
                break;
            case 2:
                de_queue(&head);
                break;
            case 3:
                print1(head);
                break;
        }
    }
}
