#include<stdio.h>

int main() 
{
	FILE *fp,*fd;
    	char ch;
	int l=0,s=0,t=0;
	fp=fopen("data","r");
    	while ((ch=fgetc(fp)) != EOF)
	{
		if(ch=='\t')
		t++;	
		if(ch==' ')
		s++;
		if(ch=='\n')
		l++;
	}
	printf("\nLines - %d\nBlank spaces - %d\nTab - %d\n",l,s,t);
}
