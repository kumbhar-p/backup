// asynchronous ..............
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int seconds;
	char line[128];
	char message[64];
	int pid ;
	pid = fork();
	while(1){
	if(pid > 0){
	
		fflush(stdin);
//		sleep(1);
		printf(" parent alarm > ");
		if(fgets(line,sizeof(line),stdin))
		printf("parent\n");
		if(strlen(line) <= 1)
			continue;
		if(sscanf(line,"%d %s4[\n]",&seconds,message) <2)
			fprintf(stderr ,"bad command\n");
		else {
			printf("sleeping in parent :\n");
			sleep(seconds);
			printf("parent : [%d] %s\n",seconds,message);
			}
		}
	
	else if(pid  == 0){
		fflush(stdin);
        printf("child alarm > ");
//		sleep(5);
        if(fgets(line,sizeof(line),stdin))
        printf("child alarm > ");
		printf("child\n");
        if(strlen(line) <= 1)
            continue;
        if(sscanf(line,"%d %s4[\n]",&seconds,message) <2)
            fprintf(stderr ,"bad command\n");
        else {
			printf("sleeping in child :\n");
            sleep(seconds);
            printf("child  : [%d] %s\n",seconds,message);
            }
		exit(0);
        }
	}
}
