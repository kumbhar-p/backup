#include<stdio.h>
int main(void)
{
	int a = 20;
	int b = 30;
	int c = 40;
	int d = 40;
	printf("pid = %d\n",getpid());
	while(1){
	printf("a = %d\n",a);
//	sleep(2);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
}
}
