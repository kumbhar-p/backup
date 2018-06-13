#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	
	pid_t pid;
	char path[20];
	char *temp;
	char s[2] = " ";
	char *argv[20];
	char str[20];
    int cnt = 0;
	int i = 0;
	
	while(1) {
		cnt = 0;	
		printf("<bash>");
		fgets(str,20,stdin); 
	 		
		if(str == NULL){
			perror("fgets failed");
			exit(EXIT_FAILURE);
	   	}
		str[strlen(str)-1] = '\0'; 
		temp = strtok(str, s);
		while(temp != NULL){	
			argv[cnt++]=temp;
			temp=strtok(NULL, s);
		}
		argv[cnt] = NULL;
		pid = vfork();
		
		if(pid > 0) {
			wait(0);
		}
		else if(pid == 0) {
			sprintf(path, "/bin/%s", argv[0]);
			execv(path, argv);
			perror("execl");
		}
		else {
			printf("vfork failed\n");
			exit(EXIT_FAILURE);
		}
	
	}

	return 0;
}
