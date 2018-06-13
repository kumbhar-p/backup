#include<stdio.h>

int main() 
{
	FILE *fp,*fd;
    	char ch;
	fp=fopen("data","r");
    	while ((ch=fgetc(fp)) != EOF)
	printf("%d ",ch!=EOF); 

	printf("\nEOF %d\n",EOF);

}
