#include <unistd.h>
#include <errno.h>
#include <stdio.h>
int main() {
errno = 0;
long limit = sysconf(_SC_SEM_NSEMS_MAX);
printf("Limit: %ld\nerrno: %d\n\n", limit, errno);
return 0;
}
