#include"header.h"
int main(void)
{
	int a = 0;
	int b = 0;  
	int c = 0;

	printf("welcome my make file\n");

	printf("enter a value\n");
	scanf("%d",&a);
	printf("enter b balue\n");
	scanf("%d", &b);
		
	c = sum(a,b);
	printf("sum : %d\n", c);  
	
	c = sub(a,b);
	printf("sub : %d\n", c);  
	
	c = mul(a,b);
	printf("mul : %d\n", c);  
	
	c = dive(a,b);
	printf("dive : %d\n", c);  


	printf("namasthe\n");

	return 0;

}
