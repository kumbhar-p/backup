#include<stdio.h>

int *selection_sort(int *arr, int n)
{
	int i, j, temp;
	for(i = 0; i < (n - 1); i++) {
		for(j = i + 1; j <= (n - 1); j++) {
			if(*(arr + i) > *(arr + j)) {
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
	return arr;
}

