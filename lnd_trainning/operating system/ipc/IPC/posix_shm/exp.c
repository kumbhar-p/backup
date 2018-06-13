#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include<fcntl.h>


int main()
{
	struct stat sb;
	//printf ("%d\n",STDOUT_FILENO);
	printf ("st_size : %lu\n",sb.st_size);
	
	return 0;

}
