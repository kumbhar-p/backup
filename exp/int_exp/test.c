#include<stdio.h>

#if 0 
int main()
{
    int a=8;
    printf("%d\n",~a^a++ || ++a++>>2 && !a&a--);
}

// output lvalue error at ++a++
#endif


#if 0 
int main()
{
    int r;
    if(r= 5 !=4 )
        printf("inside loop %d\n",r);
    else
        printf("otsid %d\n",r);
}

#endif

#if 0 

int main()
{
    char str[]="ab cde fghi";
    char *str1,*str2,*str3;

   sscanf(str, "%s", str1);
   printf ("%s\n", str1);

//   sscanf(str, "%s", str2, str3);
  // printf ("%s%s\n", str2, str3);
   return 0;

                                                                                                                                                                                                                }
#endif

#if 0
int main ()
{
    char *p = "NULL\0NN";

    printf ("%s\n", p);
    return 0;
}
#endif

#if 0
int main ()
{
    int x = 5;
    int *p = &x;
    printf ("%d\n", ++*p);
    return 0;
}
#endif

#if 1
#define f(x, y) x##y
#define g(y) #y
#define h(y) g(y)
int main ()
{
    printf ("%d\n", f (2, 3));  //Segmentation fault
}
#endif
