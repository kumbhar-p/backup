#include<stdio.h>
int main()
{                                                                               
     char str[]="abc def ghi";                                                   
     char *str1;                                                     
                                                                                  
     sscanf(str, "%s", str1);                                                     
     printf ("%s\n", str1);  

     return 0;
}

