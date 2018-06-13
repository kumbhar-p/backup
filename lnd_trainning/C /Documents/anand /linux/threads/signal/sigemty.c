#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void print( sigset_t set, int signo )
  {

    printf( "Set %8.8lx. Signal %d is ", set, signo );
    if( sigismember( &set, signo ) )
      printf( "a member.\n" );
    else
      printf( "not a member.\n" );
  }

int main( void )
  {
    sigset_t set;

    sigemptyset( &set );
    print( set, SIGINT );

   // sigfillset( &set );
//    print( set, SIGINT );

  //  sigdelset( &set, SIGINT );
  //  print( set, SIGINT );

    //sigaddset( &set, SIGINT );
    print( set, SIGINT );
    return EXIT_SUCCESS;
  }
