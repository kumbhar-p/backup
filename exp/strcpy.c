#include<stdio.h>
#include<string.h>

int main()
{
   char str[10] = {'d', 't', '\0', 'u', 'j'};
   char str1[10];
   int i;

   strcpy(str1, str);
   printf("str1 = %c\n",*(str1+3));
   printf("str = %s\n",str);
   for(i = 0; i < 10; i++) 
       printf("%c",str1[i]);
   printf("\n");
   
   memcpy(str1, str, 10);
   printf("str1 = %c\n",*(str1+3));
   printf("str = %s\n",str);

   for(i = 0; i < 10; i++) 
       printf("%c",str1[i]);
   printf("\n");
}
