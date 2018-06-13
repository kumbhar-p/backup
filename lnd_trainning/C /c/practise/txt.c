#include<stdio.h>
int main(void)
{
	char *str = "edge";
	char *str1 = "edge";
	int a = sizeof"global";
	

	if("global" == "global")
		printf("----\n");
	else
		printf("*****\n");
	if(str == str1)
		printf("global");
	else
		printf("not global");
	printf("%s\n","punam");
	printf("%d\n",a);
}

