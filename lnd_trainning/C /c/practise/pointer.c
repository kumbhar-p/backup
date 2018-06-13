#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *cstr = "UBIQUITIONS";
char *str;
char *dstr;
int main()
{
	str = malloc(10);
	printf("0x%08x \n",str);
	free(str);
	str = "Gamut";
	printf("0x%08x \n",str);
	
	dstr = malloc(10);
	printf("0x%08x \n",dstr);
	strcpy(dstr,"Global");
	printf("0x%08x \n",dstr);
	free(dstr);
return 0;
	
	
}

