#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define TRUE 1

int main(){

	FILE* fp;
	int choice;
	static unsigned long data_buf;
	printf ("User space program\n");

	while(TRUE) {

		fp = fopen("/sys/irRemote/gpio926/irdata","r");
		fscanf(fp, "%ld", &data_buf);
		printf("irdata -----> %lu\n ", data_buf);
		printf ( "1 : READ\n 2 : EXIT\n");
		scanf("%d", &choice);
		if ( choice == 1 )
			continue;
		else
			break;
	}
	return 0;
}

