#include<stdio.h>
#include<stdlib.h>

int partition(int *ar, int l, int r);

int *quick_sort(int *ar,int left, int right)
{
	int j;
	if(left < right) {
		j = partition(ar, left, right);		
		quick_sort(ar, left, j - 1);
		quick_sort(ar, j + 1, right);
	}
	return ar;
}

int partition(int *arr3, int l, int r)
{
	int i = l + 1;
	int j = r;
	int pivot;
	int temp;

	pivot = *(arr3 + l);
	
	while(1) {
		while((i < r) && (pivot >= *(arr3 + i ))) 
			i++;

			while(pivot < *(arr3 + j))
				j--;

			if(i < j) {
				temp = *(arr3 + i);
				*(arr3 + i) = *(arr3 + j);
				*(arr3 + j) = temp;
			}
			else {
				temp = *(arr3 + l);
				*(arr3 + l) = *(arr3 + j);
				*(arr3 + j) = pivot;

				return j;
			}
			
	}
}
