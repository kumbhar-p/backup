#include<stdio.h>
#include<stdlib.h>

#define BUF 512

char *my_fgets(char *op);
char* remove_n(char *target);
int my_atoi(char *op);
int *bubble_sort(int *arr, int n);
int *selection_sort(int *arr, int n);
int *insertion_sort(int *arr, int n);
int *merge_sort(int *arr,int left, int right);
int *quick_sort(int *ar,int left, int right);
void display(int *, int );

int main()
{
	int *arr = NULL;
	char *str = NULL;
	int ele;
	int i;
	int ch;

	if(NULL == (str = (char *)malloc(sizeof(char) * BUF))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	printf("enter the no of elements\n");
	str = my_fgets(str);
	str = remove_n(str);
	ele = my_atoi(str);

	printf("enter ur choice\n  1. Bubble sort\n  2. Selection sort\n  3. Insertion sort\n  4. Merge sort\n  5. Quick sort\n");
	str = my_fgets(str);
	str = remove_n(str);
	ch = my_atoi(str);
	
	if(NULL ==(arr = (int *)malloc(sizeof(int) * ele))) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	
	printf("enter the elements\n");	
	for(i = 0; i < ele; i++) {
		str = my_fgets(str);
		str = remove_n(str);
		*(arr + i) = my_atoi(str);
	}
	printf("Before sort\n");
	display(arr, ele);
	
	switch(ch) {
		case 1 :
 			arr = bubble_sort(arr, ele);
			printf("After sort\n");
			display(arr, ele);
			break;
		case 2 :
			arr = selection_sort(arr, ele);
			printf("After sort\n");
			display(arr, ele);
		case 3 :
			arr = insertion_sort(arr, ele);
			printf("After sort\n");
			display(arr, ele);
			break;
		case 4 :
			arr = merge_sort(arr, 0, ele - 1);
			printf("After sort\n");
			display(arr, ele);
			break;
		case 5 :
			arr = quick_sort(arr, 0, ele - 1);
			printf("After sort\n");
			display(arr, ele);
			break;
		default :
			break;
	}
	
return 0;
}

void display(int *arr, int ele)
{
	int i;
	for(i = 0; i < ele; i++) 
		printf("%d ",*(arr + i));
		printf("\n");
}
