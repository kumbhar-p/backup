#include<stdio.h>

int a[5] = {11,33,55,77,88};

int bin_search(int low, int high, int value)
{
    int mid;
    while (low <= high) {                    
        mid = (low + high) / 2;                     
        if(a[mid]==value)               
            return mid;          
        else if (a[mid] >= value)
            high = mid - 1;
        else
            low = mid + 1;
    }
return -1;
}

int main(void)
{
    int val, i;
    int index;
    for(i = 0; i < 5; i++)
        printf("%d ",a[i]);
    printf("\nenter the number to be searched\n");
    scanf("%d",&val);
    if((index = bin_search(0, 4, val)) != -1) {
        printf("%d is found at the index %d\n",val ,index);
    }
    else
        printf("%d is not present\n",val);
    return 0;
} 
    

