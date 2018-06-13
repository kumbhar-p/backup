#include<stdio.h>
int main()
{
	int i;
	char a[20]="hello\tworld";
	for(i=0;a[i];i++)
	{
		if(a[i]=='\t')
		a[--i]='\';
	}
	
	printf("%s\n",a);
}
