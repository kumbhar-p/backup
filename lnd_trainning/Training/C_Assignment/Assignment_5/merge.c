#include<stdio.h>
#include<stdlib.h>

int *merge(int *arr,int m, int l, int r);

int *merge_sort(int *arr,int left, int right)
{
	int mid;
	if(left < right) {
		mid = left + (right - left)/2;
			
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);

		arr = merge(arr, mid, left, right);
	}
	return arr;
}

int *merge(int *arr,int m, int l, int r)
{
	int *arr1 = NULL;
	int *arr2 = NULL;
	int a1 = m - l + 1;
	int a2 = r - m;
	int i, j, k;
	
	if(NULL ==(arr1 = (int *)malloc(sizeof(int) * a1))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	if(NULL ==(arr2 = (int *)malloc(sizeof(int) * a2))) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
	
	for(i = 0; i < a1; i++)
		*(arr1 + i) = *(arr + l + i);
	for(j = 0; j < a2; j++)
		*(arr2 + j) = *(arr + m + 1 + j);

	i = 0;
	j = 0;
	k = l;

	while(i < a1 && j < a2) {
		if(*(arr1 + i) <= *(arr2 + j)) {
			*(arr + k) = *(arr1 + i);
			i++;
		}
		else {
			*(arr + k) = *(arr2 + j);
			j++;
		}
		
		k++;
	}

	while(i < a1) {
		*(arr + k) = *(arr1 + i);
		i++;
		k++;
	}
	
	while(j < a2) {
		*(arr + k) = *(arr2 + j);
		j++;
		k++;
	}

	return arr;

}
