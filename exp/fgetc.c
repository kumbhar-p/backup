#include<stdio.h>
int main(void)
{
	FILE *fp = NULL;
	char c = 0;
	fp = fopen("data","r");
	#if 1
	while((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	#endif
	//	printf("\n");

	return 0;
}
