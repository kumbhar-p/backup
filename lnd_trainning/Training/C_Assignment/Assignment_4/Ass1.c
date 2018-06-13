#include<stdio.h>
int bit_swap(int ,int ,int );
int main(void)
{
		int num,s,d,i;
		printf("enter the no\n");
		scanf("%d",&num);
		printf("Enter s & d\n");
		scanf("%d %d",&s,&d);

		for(i = 31; i >= 0; i--) {
				if(i % 8 == 0)
						printf(" ");
				printf("%d",num >> i & 1);
		} 
		printf("\n");
		num = bit_swap(num, s, d);

		for(i = 31; i >= 0; i--) {
				if(i % 8 == 0)
						printf(" ");
				printf("%d",num >> i & 1);
		} 
		return 0;
}
int bit_swap(num, s, d)
{
		if(((num >> s) & 1) == ((num >> d) & 1)){}

		else {
				num = num ^(1 << s);
				//	printf("%d\n",num);
				num = num ^(1 << d);
				//	printf("%d\n",num);
		}

		printf("%d\n",num);
		return num;
}
