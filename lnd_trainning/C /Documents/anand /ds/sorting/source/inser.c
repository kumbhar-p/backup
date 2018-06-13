#include"headers.h"// insertion sort
int insertion(void)
{
    int a[max];
    int i = 0;
    int j = 0;
    int temp = 0;
    printf("enter the elments:");
    for(i = 0 ; i < max ; i++)
        a[i] = myatoi();
    for(i = 0 ; i < max-1 ; i++) {
        for(j = i+1 ; j > 0 ; j--) {
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("after sorting operation:\n");
    for(i = 0 ; i < max ; i++) {
        printf("%d  ", a[i]);
    }

    return 0;

}


