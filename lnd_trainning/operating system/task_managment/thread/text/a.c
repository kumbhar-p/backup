#include <stdio.h>
#include <stdlib.h>
#if 0
int main (int argc, char **argv)
{
	char *p;

	printf("sizeof p = %d\n",sizeof(p));
	printf("sizeof *p = %d\n",sizeof(*p));
	printf("argcis = %d\n",argc);

	return 0;

}
#endif

#if 1
int main (int argc, char *argv[])
{
	char *p;

	p = (char *) calloc(2,5 * sizeof(char));

	p+0 = "arun";
	p+1 = "kuma";

	printf("%s\n %s\n",p+0,p+1);

	return 0;
}
#endif
	 
