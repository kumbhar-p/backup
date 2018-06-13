#include<stdio_ext.h>

typedef struct st
{
	unsigned int date : 5;
	unsigned int month : 4;
	unsigned int year;

	int yr_of_join;
	char gender;
}ST1;

typedef union log_info
{
    char ph[20];
    char mail[20];
}ST;

int main()
{
    ST a;
	ST1 b;
    int ch,d,m,y;
	printf("size of date - %d\n",sizeof(a.ph));
	printf("size of ST1 - %d\n",sizeof(ST1));
	printf("size of ST - %d\n",sizeof(ST));
    printf("Enter log in info\nenter a ch\n  1. Enter ph no.\n  2. Enter mail id\n");
    scanf("%d",&ch);
    switch(ch) {
        case 1 :
            printf("enter the phone no.\n");
            scanf("%s",a.ph);
            break;
        case 2 :
            printf("enter the email id\n");
            scanf("%s",a.mail);
            break;
        default :
            printf("wrong input\n");
            break;
    }
	
	printf("enter the DOB\n");
	scanf("%d%d%d",&d, &m, &b.year);
	b.date = d;
	b.month = m;
	printf("Enter yr of joining\n");
	__fpurge(stdin);
	scanf("%d",&b.yr_of_join);
	printf("enter gender\n");
	scanf(" %c",&b.gender);
	printf("\n    Details\n");
	if(ch == 1)
		printf("Phone no.  - %s\n",a.ph);
	else
	printf("Email id   - %s\n",a.mail);
	printf("DOB        - %d-%d-%d\n",b.date, b.month, b.year);
	printf("Yr of join - %d\n",b.yr_of_join);
	printf("Gender     - %c\n",b.gender);
	return 0;
}
