#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char **argv)
{
	FILE *fp;
//	FILE *fd;
	char ch;
	
	fp = fopen(argv[1],"r");
	
	while((ch = fgetc(fp)) != EOF) {
		printf("%c",ch);
	}
		
	fp = fopen(argv[1],"a+");
	while((ch = getchar()) != EOF) {
		fputc(ch, fp);
	//	printf("%c",ch);
	}
	printf("\n");
	return 0;
}
