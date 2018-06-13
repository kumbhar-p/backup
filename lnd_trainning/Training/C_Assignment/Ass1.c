#include<stdio.h>

int main(int argc, char **argv)
{
	if(argc != 2) {
		printf("usage:/a.out *\n");
	}

	printf("argc = %d\n",argc - 1);

	return 0;
}
