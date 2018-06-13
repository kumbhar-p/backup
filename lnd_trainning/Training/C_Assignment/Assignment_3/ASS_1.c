#include<stdio.h>

int dec_to_boh(int , char);

int main(void)
{
		int num;
		char ch;
	
		printf("enter the decimal number\n");
		scanf("%d",&num);
		printf("enter ch\n1.binary 2.octal 3.Hex\n");
		scanf(" %c",&ch);
		dec_to_boh(num, ch);
		return 0;
}
