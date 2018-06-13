#include<stdio.h>



int main( void )
{
	int n = 0;
	int i = 0;
	int j = 0;
	int count = 0;

	int a[6] = {1,1,1,2,2,2};


	n = sizeof(a)/sizeof(int);



	for( i = 0 ;i < n ;i++){
		count = 0;
		for( j = 0 ;j < n ;j++){
			 if(a[i] == a[j]){
				count++;
			}
			/*if(j == (n-1)){
				printf("\ncount of %d is %d",a[i],count);
			}*/
		}
		printf("\ncount of %d is %d",a[i],count);
	}
}
 
