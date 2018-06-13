#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a = NULL;
	int r = 3,c = 4,i,j;

	a = (int **)malloc(sizeof(int *) * r);

	for(i = 0; i < r; i++)
		a[i] = (int *)malloc(sizeof(int ) * c);
	
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) 
			scanf("%d",&a[i][j]);
		printf("\n");
	}

	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++)
			printf("%d ",a[i][j]);
			printf("\n");
	}
}
