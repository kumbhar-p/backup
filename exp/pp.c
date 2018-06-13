#include<stdio.h>

#if 0
const int a = 20;
int main(void)
{
	int k = 100;
	int * const p = &k;
//	*p = 200;
	printf("\n%d\n", k);
	return 0;
}

#endif

#if 1

int main(void)
{
	char* v[] = {"adc", "efg", "hij" };
	char **p = v;

//	printf("%c\n", *(++p[0]));
	printf("%c\n", (*++p)[0]);

	return 0;
}

#endif
