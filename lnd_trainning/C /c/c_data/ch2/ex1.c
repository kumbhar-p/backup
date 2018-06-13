#include<stdio.h>
#include<limits.h>

int main(void)
{
	printf("signed char            - %d to %d\n",SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char          - 0 to %u\n",UCHAR_MAX);
	printf("short int              - %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned short         - 0 to %u\n",USHRT_MAX);
	printf("signed int             - %d to %d\n",INT_MIN,INT_MAX);
	printf("unsigned int           - 0 to %u\n",UINT_MAX);
	printf("signed long int        - %ld to %ld\n", LONG_MIN,LONG_MAX);
	printf("unsigned long int      - 0 to %lu\n",ULONG_MAX);
	printf("signed long long int   - %lld to %lld\n",LLONG_MIN,LLONG_MAX);
	printf("unsigned long long int - 0 to %llu\n", ULLONG_MAX);
	
	return 0;

}
