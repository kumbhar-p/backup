#include<stdio.h>
int sum(int a,int b)
{
    return (a + b);
}

int main()
{
    int a=10;
    int b=5;
    int ans;    
    ans=sum(a,b);
    printf("sum is %d",ans);
}
