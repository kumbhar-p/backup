/* 3. Write a program to implement a simple calculator using function pointers. The input for
this calculator will be taken from command line arguments.
The simple calculator will have four functions add, sub, mul, div which only operates on
integers
Usage: $./scalc <oper> <n1> <n2>
where oper = add, sub, mul, div
and n1 and n2 are integers   */


#include<stdio.h>
#include<stdlib.h>

int sum(int , int );
int mul(int , int );
int divi(int , int );
int sub(int , int );

int main(int argc, char **argv)
{
	int (*p)(int, int);         //declaration of function pointer
	int res;
//	char op;

	if(argc <= 3) 
		printf("usage:./a.out <operand> <n1> <n2>\n");
//	if(argv[1] == "*")
//		argv[1] = "4";

	switch(argv[1][0]) {
		case '+' :
			p = sum;
			res = (*p)((atoi(argv[2])),(atoi(argv[3])));
			printf("sum = %d\n",res);
			break;
		case '-' :
			p = sub;
			res = (*p)((atoi(argv[2])),(atoi(argv[3])));
			printf("sub = %d\n",res);
			break;
		case '/' :
			p = divi;
			res = (*p)((atoi(argv[2])),(atoi(argv[3])));
			printf("div = %d\n",res);
			break;
		case '*' :
			p = mul;
			res = (*p)((atoi(argv[2])),(atoi(argv[3])));
			printf("mul = %d\n",res);
			break;
		default :
			printf("wrong input\n");
			break;
	}

	return 0;
}

int sum(int num1, int num2)
{
	return num1 + num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int divi(int num1, int num2)
{
	return num1 / num2;
}
