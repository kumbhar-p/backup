#include<stdio.h>
int main(void)
{
	char ch[][10] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"} ;
	char str[][10] = {"Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	char str1[][10] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
	int n;
	int rev = 0;
	int rem;
	int i = 0;
	
	printf("enter the num\n");
	scanf("%d",&n);
	while(n) {
		rev = rev * 10 + n % 10;
		n = n / 10;
		i++;
	}
	if(i == 5 || i == 4) {
		rem = rev % 10;	
		rev = rev / 10;
		if(i == 5) {
			if(rem == 1) {
				printf("%s Thousand ",str1[(rev % 10)]);
				i -= 2;
			}
			else if(rem >=2) {
				printf("%s ",str[rem - 2]);
					if((rem = rev % 10)!= 0)
						printf("%s Thousand ",ch[rem]);	
					else
						printf("Thousand\n");
				i -= 2;
			}
				rev = rev / 10;
		}

		if(i == 4) {			
			printf("%s Thousand ",ch[rem]);
			i--;
		}
	 }	

	if(i == 3) {
		rem = rev % 10;
		if(rem != 0)
		printf("%s Hundered ",ch[rem]);
		rev = rev / 10;
		i--;
	}

	if(i == 2) {
		rem = rev % 10;
		rev = rev / 10;
		if(rem == 1) {
			printf("%s ",str1[rev]);
		}	
		else if(rem >= 2) {
			printf("%s ",str[rem - 2]);
			printf("%s ",ch[(rev % 10)]);
		}
	}

	if( i == 1)	
			printf("%s ",ch[(rev % 10)]);
		printf("\n");
	return 0;
}
