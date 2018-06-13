#include"headers.h"
int bublesort(void)
{
    int a[max];
    int i = 0;
    int j = 0;
    int temp;
    printf("enter the elements:");
    for(i = 0 ; i < max ; i++) 
        a[i] = myatoi();

    for(i = 1 ; i < max ; i++) {
        for(j = 0 ; j < max-i ; j++) {
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] =temp;
            }
        }
    }
    printf("after sorting:\n");
    for(i = 0 ; i < max ; i++) 
        printf("i = %d %d\n", a[i], i);
    return 0;		
}


