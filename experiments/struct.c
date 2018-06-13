#include<stdio.h>
typedef struct st
{
    int roll;
}ST;
ST std;
void display(void);
int main(void)
{
    printf("enter roll\n");
    scanf("%d",&std.roll);
    display();
}

void display()
{
    printf("%d",std.roll);
}
