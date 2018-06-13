#include <stdio.h>
struct test
{
   int x;
   long int y;
  //  unsigned int z;
};
int main()
{
    struct test t;
    char *p;
//    unsigned int *ptr1 = &t.x;
//    unsigned int *ptr2 = &t.z;
    printf("%d\n", sizeof(t));
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(int));
  //  printf("%d\n", ptr2 - ptr1);
    return 0;
}
