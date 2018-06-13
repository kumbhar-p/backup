#include<stdio.h>
int main()
{
	int b[5] = {2,5,3,6,7};
	
	int i,j,k;
	int temp;
	
	int *a = b;
	for(i = 0; i < 4; i++) {
		for(j = i + 1; j < 5; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("enter the k\n");
	scanf("%d",&k);
	for(i = 0 ; i < 5; i++) 
		printf("%d ",a[i]);
	
	for(i = 0; i < 5; i++) {
		if(a[k] == b[i])
			break;
	}
	printf("\nkth smallest ele is %d\n",b[i-1]);
	printf("index is - %d\n",i);
	
}
