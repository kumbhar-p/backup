#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(int argc, char **argv) 
{
	int count=0;
	char *pch;
    char line[SIZE];
    char target[SIZE]={"20"};

	FILE *fp=fopen(argv[1],"r");

/*	if(!fp) {
		printf("Error unable to open the file\n");
	    return 0;
	 }
*/
	 while(fgets(line, SIZE, fp)){          //gets each line of the file
	printf("----");
		  pch=&line[0];                       //sets the pointer address to the first char in line
		 while((pch=strstr(pch,target)) != NULL) {  //searches for all occurrences of target in line

	         //printf("%s\n",pch++); getchar();
	         count++;
	      }

	 }
	   fclose(fp);

	   printf("target string %s was found %d times\n",target, count);

	   return 0;
}
