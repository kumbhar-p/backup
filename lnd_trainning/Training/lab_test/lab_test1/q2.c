#include<stdio.h>
#include<stdlib.h>

#define BUF 512

#define BIT_CLR(num, s, d) (num & (~((~0) << (d-s)+1) << s))

int main(void)
{
	int num;
	int s;
	int d,i;
	char *str = NULL;	

	if(NULL == (char *)malloc(sizeof(char) * BUF)) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	printf("enter the num\n");
	scanf("%d",&num);

	printf("%d\n",num);
	printf("enter s & d\n");
	scanf("%d %d", &s,&d);

	num = BIT_CLR(num, s, d);
/*	while(s <= d) {
			if((num >> i) & 1)
				num = num & ~(1 << i);
		s--;
	}
*/
	for(i = 31; i >= 0; i--) {
		printf("%d",((num >> i) & 1));
		if(i % 8 == 0)
		printf(" ");
	}
//	printf("%d\n",num);
}
/*
	while(s <= d) {
		if(BIT_CLR(num, s, d)) {
			num = num & ~(1 << s);
			s--;
		}
	}
	printf("%d\n",num);
	return 0;
}*/
/*
int my_atoi(char *op)
{
	int c = 0;
	while(*op) {
		c = c * 10 + *op + '0';
		op++;
	}
	return c;
}
    
char *remove_n(char *str)
{
	int i;
	for(i = 0; i <= BUF; i++) {
		if(*(str + i) == '\n') {
			*(str + i) = '\0';
			break;
		}
	}
	return str;
}
*/		
