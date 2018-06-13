#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void)
{
	int fd[2];
	char str[100];
	pipe(fd);
	if(fork() == 0) {//c1
		printf("in child1\n");
				printf("enter child1 data\n");
				scanf("%s", str);
				write(fd[1], str,sizeof(str));
		read(fd[0], str, sizeof(str));
		exit(1);
	//	printf("c1 : %s\n", str);
	}
	else {
		if(fork() == 0) { //c2
			printf("in child2\n");
				printf("enter child2 data\n");
				scanf("%s", str);
				write(fd[1], str,sizeof(str));
		exit(2);
			//read(fd[0], str, sizeof(str));
	//			printf("c2 : %s\n", str);
		}
		else {
			
			if(fork() == 0) { //c3
				printf("in child3\n");
				printf("enter child3 data\n");
				scanf("%s", str);
				write(fd[1], str,sizeof(str));
				exit(3);
				//read(fd[0], str, sizeof(str));
	//			printf("c3 : %s\n", str);
			
			}
			else {
				int s = 0;
				printf("in parent\n");
				//printf("enter data\n");
				//scanf("%s", str);
				read(fd[0], str, sizeof(str));
			printf("parent : %s\n", str);
				//write(fd[1], str,sizeof(str));
				wait(&s);
				s = s >> 8;
				if(s == 1) {
					printf("child1 : %d\n", s);
				}
				if(s == 2) {
					printf("child2 : %d\n", s);
				}
				if(s == 3) {
					printf("child3 : %d\n", s);
				}
			}
		}

	}
	

	return 0;
}
