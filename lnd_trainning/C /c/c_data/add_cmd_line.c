#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
//	char op;

	switch(argv[5][0]) {
		case '-' :
		case '+' :
		case '/' :
			printf("%d%s%d",atoi(argv[1]),argv[5],atoi(argv[2]));
			break;
	}
	switch(argv[4][0]) {
		case '-' :
		case '+' :
		case '/' :
			printf("%s%d\n",argv[4],atoi(argv[3]));
			break;
	}

	return 0;
}
