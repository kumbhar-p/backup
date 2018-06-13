#include<stdio.h>

int main()
{
    int i,val1 = 0;     
    char *str1 = "hello";    
    for(i = 0; *(str1 + i); i++)                                                      
      val1 += *(str1 + i);       
    printf("%d\n",val1);    
}   
