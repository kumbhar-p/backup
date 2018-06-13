#include"headers.h"
int merge_sort(void)
{
    int i;
    int j;
    int a[max];
    printf("enter the elements\n");
    for(i = 0;i < max ; i++) {
        a[i] = myatoi();
    }
    printf("our elements are\n");
    for(i = 0 ; i < max ; i++) {
        printf("a[%d]=%d\t", i, a[i]);
    }
    i = 0;
    j = max-1;
    partition1(a, i, j);	
    printf("\natfer sorting elements are\n");
    for(i = 0 ; i < max ; i++)
        printf("a[%d]=%d\t", i, a[i]);
    return 0;
}
void partition1(int arr[], int low, int high)
{

    int mid;

    if(low < high) {
        mid = (low+high)/2;
        partition1(arr, low, mid);
        partition1(arr, mid+1, high);
        mergeSort(arr, low, mid, high);
    }

}
void mergeSort(int arr[], int low, int mid, int high)
{

    int i, m, k, l, temp[max];

    l = low;
    i = low;
    m = mid+1;

    while((l <= mid) && (m <= high)) {

        if(arr[l] <= arr[m]) {
            temp[i] = arr[l];
            l++;
        }
        else {
            temp[i]=arr[m];
            m++;           		

        }
        i++;
    }

    if(l > mid) {
        for(k = m;k <= high ; k++){
            temp[i] = arr[k];
            i++;
        }
    }
    else {
        for(k = l ; k <= mid ; k++){
            temp[i] = arr[k];
            i++;
        }

    }

    for(k = low ; k <= high ; k++){
        arr[k] = temp[k];
    }
}
