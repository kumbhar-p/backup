#include<stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	int i = 0;
	fp = fopen(argv[1],"r+");

	fscanf(fp,"%d",&i);
	printf("%d",i);
	return 0;
}
	
