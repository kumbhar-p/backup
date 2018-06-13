#include"headers.h"
int queue( void )
{
    int max ;
    int arr[20];
    int ch;
    int a;
    char b;
    int i =0;
    int front = 0;
    int end = 0;
    int p;
    int l;
    printf("enter maximum range for queue:");
    scanf("%d",&max);
    while(1) {
        printf("\n1.enqueue\n2.delqueue\n3.dispqueue\n4.exit\n");
        printf("enter ur choice:");
        ch = myatoi();
        if(ch == 1) {

            while(max > end ) {
                printf("enter the value:");
                a = myatoi();    
                arr[end] = a;
                ++end;
            }
            printf("*****queue is full******\n");
        }
        if(ch == 2) {
            if(end == 0) {
                printf("******queue is empty******");
            }
            else {
                while(front <= end){
                    printf("do u want to delete:y/n:");
                    __fpurge(stdin);
                    b = getchar();
                    if(b == 'y') {
                        printf("%d",arr[0]);
                        end--;
                        front = 0;
                        p = end;
                        l = front;
                        for( ; p ; p--) {
                            l++;
                            arr[front] = arr[l];
                            front++;
                        }
                        front = 0;
                    }

                    if(b == 'n')
                        break;
                }
            }
        }

        if(ch == 3) {
            if(end == 0 ) {
                printf("*****queue is empty*******");
            }
            else{
                for( i = 0; i < end ; i++) {
                    printf("%d ", arr[i]);
                }
            }
        }
        if(ch == 4)
            return 0;
    }

    return 0;		
}
