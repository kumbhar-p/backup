/*  d. Open a text file “just.txt” in the parent before issuing fork().
	After issuing fork(), in the parent context, write the string “Global Edge” on to the file and close the file.

	In the child context write “Software limited” on to the file and close the file.
	Cat the file just.txt and draw your inferences by looking at the output.   */


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	pid_t pid;
	FILE *fp;
	
	fp = fopen(argv[1],"w+");
	if(fp == NULL) {
		printf("fopen failed\n");
		exit(EXIT_FAILURE);
	}

	pid = fork();

	if(pid > 0) {
		printf("In parent\n");
		fprintf(fp ,"%s","Gloabal Edge ");
		fclose(fp);
	}
	else if(pid == 0) {
			printf("In child\n");
			fprintf(fp, "%s","Software Limited");
			fclose(fp);
	}
	else {
		printf("fork failed\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}
