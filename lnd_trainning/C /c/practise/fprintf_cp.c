#include<stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;

	char buf[32] = "Global edge software limited";
	unsigned int n = 0xDEADBEEF;
	
	fp = fopen(argv[1],"w+");	
	fprintf(fp, "%s",buf);
	fprintf(fp, "%d",n);
	
	return 0;
}
