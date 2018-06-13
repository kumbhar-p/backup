#include"headers.h"
int stack( void )
{
    int top = -1;
    int max ;
    int arr[20];
    int ch;
    int a;
    char b;
    int i =0;
    printf("enter maximum range for stack:");
    max = myatoi();
    if( max < 0) {
        printf("invalid bytes for stack size:");
        return 0;
    }
    while(1) {

        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter ur choice:");
        ch = myatoi();        
        if(ch == 1) {
            while(max ) {
                printf("enter the value:");
                a = myatoi();  
                arr[++top] = a;
                --max;
            }
            printf("******stack is full*******");
        }
        if(ch == 2) {
            if(top == -1) {
                printf("******stack is empty********\n");
            }
            else {
                while(top != -1){
                    printf("do u want to pop:y/n:");
                    __fpurge(stdin);
                    b = getchar();
                    if(b == 'y') {
                        printf("%d", arr[top]);
                        top--;
                        max++;
                    }
                    if(b == 'n')
                        break;

                }
            }
        }
        if(ch == 3) {
            if(top == -1 ) {
                printf("******stack if empty********");
            }
            else{
                for( i = top ; i>-1 ; i--) {
                    printf("%d ", arr[i]);
                }
            }
        }
        if(ch == 4){
            printf(" you are exited from stack:\n");
            return 0;
        }


    }
    return 0;
}
