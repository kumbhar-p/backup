#include"headers.h"
int input_prime(void)
{
    int n;
    int i = 1;
    int l;
    printf("enter the number you want to find:");
//    scanf("%d", &n);
    n = myatoi(); 
    l =	prime(i, n);
    printf("l =%d\n", l);
    if(l == 1)
        printf("prime number:\n");
    else
        printf("not a prime number:\n");
    return 0;	
}
int prime(int i, int n)
{
    static int count = 0;
    if(n%i == 0){
        count++;
    }
    if(n >= ++i)
        prime(i, n);

    if(count == 2)
        return 1;
    else
        return 0;

}


