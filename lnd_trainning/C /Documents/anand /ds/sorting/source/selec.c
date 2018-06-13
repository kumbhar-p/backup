#include"headers.h"
int selecsort(void)
{
    int a[max];
    int i = 0;
    int j = 0;
    int temp = 0;
    printf("enter the elments:");
    for(i = 0 ; i < max ; i++) 
        a[i] = myatoi();
    for(i =0 ; i<max-1 ; i++) {
        for(j = i ; j<max-1 ; j++) {
            if(a[i] > a[j+1]){
                temp = a[i];
                a[i] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i = 0 ; i < max ; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}


