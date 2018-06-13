#include <stdio.h>
#include <sys/types.h>
#include <sys/mman.h>

int main(void)
{
	printf("%d\t",(int )MAP_FAILED);

	return 0;
}
