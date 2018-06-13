#include<stdio.h>

int main()
{
	if(vfork() > 0) {
		printf("in parent\n");
		printf("hello\n");
	}
	else {
		printf("welcome\n");
		execl("/bin/ls","ls",NULL);
		printf("hai\n");
		exit(0);
	}
}
