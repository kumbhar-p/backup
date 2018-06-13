/*Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.*/

#include<stdio.h>
#define MAX_WL 10  //Maximum length of a word 
#define MAX_NO 15 // Maximum No of words in a sentence 

int main(void)
{
  int w[MAX_NO][5]={0};
  int i,c,j,nc,nw;

//  for(i=0;i<MAX_NO;i++)
//    w[i]=0;

  nc = nw = 0;

  while( (c=getchar()) != EOF)
  {
    ++nc;
    if( c ==' ' || c =='\n' || c =='\t')
    {
      w[nw] = nc -1;   // -1 for excluding the space in word length 
      ++nw;
      nc = 0;    // reset the word-length for the next word 
    }
  
  }

  for( i = MAX_WL; i >= 1; --i)
  {
    for(j=0;j <= nw ;++j)
    {
      if( i <= w[j])
        putchar(c);
      else  
        putchar(' ');
      }
  putchar('\n');
  }

}

