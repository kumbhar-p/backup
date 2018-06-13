#include<stdio.h>
int main(int argc, char **argv)
{
	int c;
	
	c = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n",c);
	printf("count - %d\n",argc);
return 0;
}
