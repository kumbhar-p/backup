#include <stdlib.h>
#include <unistd.h>
int main( void )
{
    char* arr = malloc(10);
    scanf("%s",arr);
    (void) write( 1 /* stdout */, arr, 10 );
    free(arr);
    
    char *p = "hdx";
 //   char *q = malloc(10);
    char *q = "hello";
  //  scanf("%s",p);
//    scanf("%s",q);
    strcpy(p, q);
//    free(p);
//    free(q);
    return 0;
}
