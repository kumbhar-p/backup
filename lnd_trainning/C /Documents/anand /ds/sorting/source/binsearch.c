#include"headers.h"
int inser1(int a[])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0 ; i < max-1 ; i++) {
        for(j = i+1; j > 0 ; j--) {
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    for(i = 0; i < max ; i++)
        printf("%d  ", a[i]);
    return 0;
}

int search1(int a[], int l, int h, int n)
{
    int mid = (l+h)/2;
    if(a[mid] == n){
        printf("location = %d\n", mid);
        return 0;
    }
    if(a[mid] > n)
        search1(a, l, mid-1, n);
    if(a[mid] < n)
        search1(a, mid+1, h, n);

    return 0;
}
int binary_search(void)
{
    int arr[10];
    int i = 0;
    int n;
    int l = 0;
    int h = max-1;
    printf("enter the elements:");
    for(i = 0 ; i < max;i++){
        arr[i] = myatoi();
    }
    printf("enter the element to search:");
    n = myatoi();
    inser1(arr);
    search1(arr, l, h, n);
    return 0;
}

