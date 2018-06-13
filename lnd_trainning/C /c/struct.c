#if 0

#include<stdio.h>
int main()
{
    struct emp
    {
        char name[20];
        int age;
        float sal;
    };
    struct emp e = {"Tiger"};
    printf("%d, %f\n", e.age, e.sal);
    return 0;
}

#endif


#if 0
#include<stdio.h>
#include<string.h>

int main()
{
    struct emp
    {
        char *n;
        int age;
    };
    struct emp e1 = {"Dravid", 23};
    struct emp e2 = e1;
	strupr(e2.n);
    printf("%s\n", e1.n);
    return 0;
}


#endif


#if 1
#include<stdio.h>

int main()
{
    char *str;
    str = "%s";
    printf(str, "K\n");
    return 0;
}

#endif
