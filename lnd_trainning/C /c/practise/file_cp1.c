#include<stdio.h>

int main(int argc,char **argv)
{
	FILE *fs, *fd;
	char ch;

	if(argc != 3) {
		printf("usage:./a.out src_file des_file");
		return 0;
	}

	fs = fopen(argv[1],"r");
	if(fs == 0) {
		printf("file is not present\n");
		return 0;
	}

	fd = fopen(argv[2],"w");
	while((ch = fgetc(fs)) != -1)
		fputc(ch, fd);

	return 0;
}
