#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    int fs;
    int fd;
	char ch;
	int r;
    
	if(argc != 4) {
        printf("usage:./a.out file1 file2 file3\n");
        return 0;
    }

    fs = open(argv[1],O_RDONLY);
	if(fs < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    
	fd = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC);
	if(fd < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }

	while((r = read(fs, &ch, sizeof(char))) != 0)
    	write(fd, &ch, sizeof(char));
	
    f1 = fopen(argv[2],"r");
	if(f1 == 0) {
        printf("file is not present\n");
        exit(EXIT_FAILURE);
    }

    f2 = fopen(argv[3],"w+");
	if(f2 == 0) {
        printf("file is not present\n");
        exit(EXIT_FAILURE);
    }
    while((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

 	close(fs);
   	close(fd);
	fclose(f1);
	fclose(f2);
    return 0;
}
/*

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
*/
