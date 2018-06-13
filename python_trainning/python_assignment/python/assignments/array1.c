#include<stdio.h>



int main( void )
{
	int i= 0;
	int j = 0;
	int temp;
	int n;
	int a[] = {1,2,5,3,4};
	int k;
	n = sizeof(a)/sizeof(int);
	//printf("%d",n);
	for (i = 0; i < n;i++){
			for(j = 0;j < n ;j++){
				if (i == j){
					continue;
				}
				else if(j>i){
					 if(a[i]<a[j]){
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
					//printf("\n%d",a[i]);
				}
		for(k=0;k<n;k++){
			printf("%d\t",a[k]);
		}
		printf("\n");
	}
	for(i = 0;i<n;i++){
		printf("%d",a[i]);
	}
}

