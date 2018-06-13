#include<stdio.h>

#include<stdlib.h>

int main()
{
	int *p,*q,*r;
	int i;
	printf("hi\n");
	p=malloc(15);
	printf("%p\n",p);
	p--;
	for(i=0;i<30;i++)
{
	printf("%d\n",*(p+i));
}
/*	printf("%p\n",p);
	free(p);
	q=malloc(10);
	printf("%p\n",q);
	free(q);
	r=malloc(20);
	printf("%p\n",r);
	free(q);*/
}
