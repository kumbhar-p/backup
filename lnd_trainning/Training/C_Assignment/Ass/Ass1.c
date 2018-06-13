/* 1. Write a program to count number of files in a folder by reading the files from the command line       */


#include<stdio.h>
#include<stdarg.h>

int main(int argc, char **argv)
{
	int c = 0,i;

	if(argc <= 1)
		printf("usage : ./a.out fname fname...\n");

	for(i = 0; i < argc; i++)	
		c++;
	printf("%d\n",c);			

return 0;
}
