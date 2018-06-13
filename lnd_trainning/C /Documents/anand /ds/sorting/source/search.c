#include"headers.h"
int search(int a[], int n)
{
    int i = 0;
    for(i = 0 ; i < max ; i++) {
        if(a[i] == n)
            return i;
        else
            continue;
    }
    return 0;
}
int linear_search(void)
{
    int arr[10];
    int i = 0;
    int n;
    printf("enter the elements:");
    for(i = 0 ; i < max ; i++)
        arr[i] = myatoi() ;
    printf("enter the element to search:");
    n = myatoi();
    n = search(arr, n);
    if(n != 0)
        printf("found in index:%d\n", n);
    else
        printf("entered element is not found:\n");
    return 0;
}



