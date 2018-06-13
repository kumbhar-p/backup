#include<stdio.h>

int *insertion_sort(int *arr, int n)
{
	int i = 0, j;
	int key;
int k =0;
	for(i = 1; i < n; i++) {
		key = *(arr + i);
		for(j = i - 1; j >= 0 && key < *(arr + j); j--) 
			*(arr + j + 1) = *(arr + j);
//			display(arr, n);
			*(arr + j + 1) = key;
			k++;
	}
	printf("k - %d\n",k);
	return arr;
}

