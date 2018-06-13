#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	int seconds;
	char line[128];
	char message[64];
	while(1){
		printf("alarm > ");
		if(fgets(line,sizeof(line),stdin))
		if(strlen(line) <= 1)
			continue;
		if(sscanf(line,"%d %s4[\n]",&seconds,message) <2)
			fprintf(stderr ,"bad command\n");
		else {
			sleep(seconds);
			printf("[%d] %s\n",seconds,message);
			}
		}
}
