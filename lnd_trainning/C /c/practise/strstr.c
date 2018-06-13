#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "hello 10 20 world";
	char *pch = str;
    int count=0;
    char target[] = {"20"};

         while(pch = strstr("hello 10 20","hello")) {

             //printf("%s\n",pch++); getchar();
             count++;
          }

     

       printf("target string %s was found %d times\n",target, count);

}
