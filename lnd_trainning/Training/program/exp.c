#include<stdio.h>

int add(int a,int b);
int mul(int a,int b);

int main(int argc, char **argv)
{
	int a;
	int b;
	int c;
	int res;
	
	if(argv[4][0] == '+') {
		a = atoi(argv[2]);
		b = atoi(argv[3]);
		res = add(a, b);
	}

	if(argv[5][0] == '-') {
		c = atoi(argv[1]);
		res = sub(c, res);
	}
	printf("res - %d\n",res);

	return 0;
}

int add(int a,int b)
{
	return a + b;
}


int sub(int a,int b)
{
	return a - b;
}

