#include<stdio.h>

typedef union st
{
	char *ph;
	char mail[20];
}ST;

int main()
{
	ST a;
	int ch;
	printf("enter a ch\n");
	scanf("%d",&ch);
	switch(ch) {
		case 1 :
			printf("enter the phone no.\n");
			scanf("%d",a.ph);
			break;
		case 2 :
			printf("enter the email id\n");
			scanf("%d",a.mail);
			break;
		default :
			printf("wrong input\n");
			break;
	}

	return 0;
}
