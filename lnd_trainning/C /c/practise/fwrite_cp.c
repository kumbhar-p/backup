#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char buf[32] = "Global edge software limited";
	unsigned int n = 0xDEADBEEF;
	FILE *fp;

	fp = fopen(argv[1],"w+");

	fwrite(buf, sizeof(buf), strlen(buf), fp);
	fwrite(&n, sizeof(n), 8, fp);
	
	return 0;
}
