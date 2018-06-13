#include<pthread.h>
#include<stdio.h>
#include<fcntl.h>
#include<semaphore.h>
#include<string.h>
#include<stdlib.h>
#include<signal.h>
#include<stddef.h>
#include<arpa/inet.h>

#if 0
int main(void)
{
//   char *ptr = "/*dfgggdfgdfg*/asdasdad";
    char ptr = '/*sfgggdfgdfg*/asdasdcv';
    printf("%c\n", ptr);
}
#endif

#if 0
int main(void)
{
    char val = L'xsdffwer';
    printf("%c\n",val);

}
#endif

#if 0
int main(void)
{
    char ch = 123;
    printf("%c\n",ch);

}
#endif

#if 0
int main(void)
{
//    #define tue 769
//  enum tag{sun,mun = 768,tue}val = 100;
  enum {sun,mun = 768,tue}val1 = 100;
//    val = 100;
//    mun = tue;
//    char *mun= "asdasd";
    printf("%d\n", val1);
 //   fun();
}
/*
int fun(void)
{
    printf("%d\n",tue);

}*/
#endif

#if 0
int main(void)
{
    int a;
    a = a+1  = 20;
//    printf("%d\n",*1223);
}
#endif

#if 0 
int main(void)
{
    float a = -312.23;
    unsigned int x = a;
    printf("x = %d\n",x);

}
#endif

#if 0 
int main(void)
{
    unsigned char val = 128;
    if((unsigned )128 == (unsigned )val)
        printf("same\n");
    printf("val = %d\n",val);
}
#endif

#if 0
int main(void)
{
    int a = 100;
    int *ptr = &a;
    ptr = (void **)&a;
    printf("val = %d\n",*ptr);
}
#endif

#if 0
int main(void)
{
    int a = 100;
    void *ptr = &a;
    printf("%d\n",*(int **)ptr);

}
#endif

#if 0
int main(void)
{
    void *ptr[10];
    ptr[0] = "anand";
    printf("%s\n",(int *)++ptr[0]);

}
#endif

#if 0 
int main(void)
{
    int *ptr ;
    ptr = malloc(0);
    printf("ptr = %p\n",ptr);
}
#endif

#if 0 
int main(void)
{
    char *arr = L"zxbcdef";
    printf("str = %s\n",arr);
    int a;
    int b;
    int c;
//    (a,b,c) = 1;
}
#endif

#if 0 
int fun(char a,int b,float c)
{
    printf("in function:\n");
}
int main(void)
{
    int x = 10;
    int arr[++x];
    char *ptr = "aaaaaaa";
    printf("%s\n",ptr);
    int a = 10;
    int b = 2;
    int c = 6;
    fun(a,b,c);
    &main;
}
#endif

#if 0
int main(void)
{
    int *ptr = NULL;
    ptr = malloc(10);
    printf("%p\n",ptr);
    *(ptr+1) = 7867;
    *(ptr-2) = 8923;
    printf("%d\n",*(ptr-2));
    free(ptr);
}
#endif
#if 0
int main(void)
{
    int **ptr = NULL;
    int arr[][4] = {1,2,3,4,5,6,7,8,9,0};
    ptr = &arr;
    ptr = ptr+3;
    printf("%d\n",*ptr);

}
#endif
#if 0
int *fun(int *ptr)
{
    ptr = malloc(10);
    free(ptr);

    return ptr;

}
int main(void)
{
    int *ptr = NULL;
    ptr = fun(ptr);
    free(ptr);
}
#endif
#if 0
int main(void)
{
  //  char arr[100] = {123,213123,123123,123213,213123,213};
    char arr[100] = {'0'};
    int i = 0;
    for(i = 0; i<20;i++){
        printf("i = %d = %d\n",i,arr[i]);
    }
    printf("strlen ==> length = %d\n",strlen(arr));
    printf("length = %d\n",sizeof(arr));
}
#endif
#if 0
int fun(char ptr[])
{
    printf("length = %d\n",strlen(ptr));
    printf("length = %d\n",sizeof(ptr));


}
int main(void)
{
    char arr[] = "anandkumar";
    fun(arr);

}
#endif
#if 0
int main(void)
{
    int arr[10] = {0};
    void *ptr = arr+2;
    char *ptr1 = arr;
    printf("%d\n",ptr1 & 0Xff00);
}
#endif
#if 0
int count = 2;
int main(void)
{
    char **ptr = NULL;
    char **ptr1 = NULL;
    FILE *fp1 = NULL;
    int i = 0;
    fp1 = fopen("anand","r");
    ptr = realloc(NULL , sizeof(int *));
    ptr1 = ptr;
    ptr[0] = malloc(80);
    printf("ptr = %p\n",ptr);
    printf("ptr[0] = %p:",ptr[0]);
    while(fgets(ptr[i],80,fp1)){
        printf("%s ",ptr[i]);
        i++;
        ptr = realloc(ptr , count*4);
        ptr[i] = malloc(80);
        count++;
    }

   // for(i = 0 ; i < count ; i++){
  //      printf("%s\n",ptr1[i]);
   // }

}
#endif
#if 0
int fun(int (*ptr)[3])
{
    printf("%d\n",*(*ptr+1));


}
int main(void)
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    fun(arr);

}
#endif
#if 0
int main(void)
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr[3];
    ptr[0] = arr;
    printf("%d\n",*(ptr[0]+3));

}
#endif
#if 0
int main(void)
{
    int x = -300;
    unsigned char *ptr = &x;
    ptr++;
    printf("%d\n",*ptr);

}
#endif
#if 0
int main(void)
{
    int const *p = 5;
    int q;
    p = &q;
    printf("modified = %d\n",++(p));
}
#endif
#if 0
int main(void)
{
    const int arr[] = {1,2,3,4,5};
    int *ptr = arr+3;
    *ptr = 100;
    arr[2] = 2000;
    printf("mod = %d\n",arr[3]);
}
#endif
#if 0
int main(void)
{
    int arr[] = {1,2,3,4,5,6};
   short int *ptr1 = &arr[3];
   short int *ptr2 = &arr[2];
    printf("diff = %d\n",(ptr1-ptr2));
}
#endif
#if 0
void fun(int *ptr)
{
    printf("%d\n",*ptr);
}
int main(void)
{
    int i = 10;
    int j = 20;
    int *p = &i;
    fun(p++);
    printf("hi.........:\n");
    fun(p);
}
#endif
#if 0
int main(void)
{

    char *ptr = "hai";
    char *p1 = ptr+4;
//    printf("%d\n",++*p1++);
    printf("%d\n",+1,233);
}
#endif
#if 0
int main(void)
{

    char *ptr1 = NULL;
    char *ptr2 = NULL;
    printf("%d\n",&ptr2 - &ptr1);

}
#endif
#if 0
int main(void)
{
    int  a = 256;
    void *ptr = &a;
    printf("%d\n",*(char *)(int *)ptr);
}
#endif
#if 0
int main(void)
{
    char arr[] = "anandkumar";
    int i;
    int *ptr = arr;
    for(i = 0;i<5;i++){
        printf("%d\n",*ptr++);

    }

}
#endif
#if 0
void fun(char *q)
{
    if(*q != 'r'){
        putchar(*q);
        fun(q++);
    }

}
int main(void)
{
    char *p = NULL;
    p = "abcder";
    fun(p);
}
#endif
#if 0
void fun(int p[3])
{
    int i = 10;
    p = &i;
    p[0] = 100;
    printf("%d\n",*p);

}
int main(void)
{
    int arr[ ]= {1,2,3,4,5};
    fun(arr);
    printf("%d\n",arr[0]);
}
#endif
#if 0
int main(void)
{
    int a = 1,b = 2,c = 3;
    int *ptr1 = &a,*ptr2 = &b,*ptr3 = &c;
    int **sptr = &ptr1;
    printf("%d\n",**sptr);
    *sptr = &ptr2;
    printf("%d\n",**sptr);
}
#endif
#if 0
int main(void)
{
    char *arr[10] = {"aaaa","bbbb","cccc","dddd"};
    int i = 0; 
    printf("size =%d\n",sizeof(arr));
    for(i= 0; i<10;i++){
        printf("%s\n",arr[i]);
    }

}
#endif
#if 0
int main(void)
{
    char arr[][5] = {"aaaa","bbbsad","ccccc","ddddd"};
    printf("anandkumar\\n");
    printf("%c\nn",*arr[1]);

}
#endif
#if 0
int main(int argc,char **argv)
{
   char *arg[10] = {NULL};
   char *tok = NULL;
   int i = 0;
   int j = 0;
   char arr[] = "hello  world global    e dge soft  ware limited";
   tok = strtok(arr," ");
   while(tok != NULL){
        arg[i++] = tok;
        tok = strtok(NULL," ");
   }
   for(j = --i; j>=0;j--){
       printf("%s\n",arg[j]);
   }

}
#endif
#if 0
int main(int argc, char **argv)
{
    printf("%s\n",strtok("anand",NULL));
    printf("returned null:\n");
    
}   
#endif
#if 0
int (*(arr[4]))(int,int);
int add(int a ,int b)
{
    return a+b;
}
int main(void)
{
    arr[0] = add;

    printf("hello world:%d\n",arr[0](3,4));

}
#endif
#if 0
/*struct tag{
  void *ptr;
  struct tag *link;
  }*head;*/
struct tag{
    union tag1{
        int a;
        char val;
        float c;
        char  b[20];
    }val;
    struct tag *link;
}*head;
int main(void)
{
    int n = 20;
    float a = n;
    head = malloc(sizeof(struct tag));
    scanf("%d",&(head->val.a));
    printf("%f\n",head->val.c);
}
#endif
#if 0
union tag{
    int a;
    float b;
}head;
int main(void)
{
    head.b = 200.23;
    printf("%d\n", head.a);
}
#endif
#if 0
int main(int argc,char **argv)
{
    char *arr[10];
    while(*argv++ != NULL){
        printf("%s\n",argv[-sizeof(argv)]);
    }
    return 0;
}
#endif
#if 0
int main(void)
{
    static char *s[] = {"aaaa","bbbb","cccc","dddd"};
    char **ptr[] = {s+3,s+2,s+1,s};
    char ***p = ptr;
    printf("%s\n",**p+1);
    return 0;
}
#endif
#if 0
int i = 0;
void fun( int (*)(void));
int main(void)
{
//    if(i<100){
  //      printf("i = %d\n",i++);
  //  }
    fun(main);
    return ++i;
}
void fun(int (*val)(void))
{
   // getchar();
    printf("in fun:\n");
    printf("%d\n",val());
}
#endif
#if 0
int main(void)
{
    char *ptr = "hello world";
    char **p = ptr;
    printf("%s\n",p+1);

}
#endif
#if 0
int main(void)
{
    int x = 30;
   // float y = *(float *)&x;
    float y = x;
    printf("float = %f\n",y);
}
#endif
#if 0
int main(void)
{
    int arr[5],i;
    int *p=arr;
    printf("Enter five numbers separated by space:");
    scanf("%d%d%d%d%d",p,p+1,p+2,p+3,p+4);
    printf("Your numbers are:\n");
    for(i=0;i<5;i++)
        printf("%d\n",arr[i]);     
    return 0;  
} 
#endif
#if 0
int main()
{
    char blocks[3] = {'A','B','C'};
    char *ptr = &blocks[0];
    char temp;

    temp = blocks[0];
    temp = *(blocks + 2);
    temp = *(ptr + 1);
    temp = *ptr;

    ptr = blocks + 1;
    temp = *ptr;
    temp = *(ptr + 1);

    ptr = blocks;
    temp = *++ptr;
    printf("%c\n",temp);
    temp = ++*ptr;
    printf("%c\n",temp);
    temp = *ptr++;
    printf("%c\n",temp);
    temp = *ptr;
    printf("%c\n",temp);

    return 0;
}
#endif
#if 0
int fun(void)
{
    return printf("hello world:\n");
}
int main(void)
{
    int a = 20;
    const *p = &a;
    printf("%d\n",*p);
    int fun(void);
    printf("%d\n",fun());



}
#endif
#if 0
int main(void)
{
    char string[]="Hello World";
    display(string);
}
void display(char *string)
{
    printf("%s",string);
}
#endif
#if 0
int main(void)
{
    int i = 65;
    int j = !(i>100);
    printf("%d\n",j);
}
#endif
#if 0
int main(void)
{
    int a[3][2][2] = { {10,2,3,4}, {5,6,7,8} };
    int *p,*q = malloc(4);;
    p=&a[2][2][2];
    *q=***a;
    printf("%d----%d-----%d\n",*p,*q,a[2][2][2]);
}
#endif
#if 0
struct tag{
    int x;
    struct {
        int y;
        struct tag *xx;
    };
    struct tag1 *yy;
};
int main(void)
{
    printf("size = %d\n",sizeof(struct tag));
}
#endif
#if 0
main()
{
    char *p="hai friends",*p1;
    p1=p;
    while(*p!='\0') ++*p++;
    printf("%s %s",p,p1);
}
#endif
#if 0
extern int out;
int main(void)
{
    int i = 0;
    printf("out = %d\n",out);
  //  fun();
    for( ; i++ ;printf("%d\n",i)){
        printf("loop : %d\n",i);
    }
}
out = 100;
#endif
#if 0
struct tag{
    int x;
    int y;
}head,*val;
int main(void)
{
    val = &head;
    printf("x = %d\n",(*val).x);
    printf("y = %d\n",(*val).y);

}
#endif
#if 0
int fun(void)
{
    return(printf("hello world:\n:"));
}
int main(void)
{
    printf("%d\n",fun());
}
#endif
#if 0
int convert_1(char );
int x;
char z = 'a';
int main(void)
{
    char c= (' ',x,convert_1(z));
    printf("c = %c\n",c);
//    getc(stdin);
    if((c>='a') && (c<='z'))
        x=convert_1(c);
    printf("%c",x);
}
int convert_1(char z)
{
    return z-32;
}
#endif
#if 0
int main(void)
{
    int one_d[]={1,2,3};
    int *ptr;
    ptr=one_d;
    ptr+=3;
    printf("%d:\n",*ptr);
}
#endif
#if 0
int main(void)
{
    int i;
    i = abc();
    printf("i  =%d\n",i);
}
int abc(void)
{
    _AH = 1000;
}

#endif
#if 0
int main(void)
{
    char *ptr = NULL;
    ptr = "%d%s",
        printf(ptr);
}
#endif
#if 0
int main(void)
{
    char *p;
    p="%d\n%d\n%d\b\n\b%d\n";
    p++;
    p++;
    printf(p-2,300,200,400,500,600);
}
#endif
#if 0
int main(void)
{
    int size ;
    char buf[10];
    if(fgets(buf,10,stdin) == NULL)
        printf("end of file:\n");
//   size =  atoi(NULL);
    atoi(NULL);
//    size = atoi(fgets(buf,10,stdin));

    printf("%s",buf+4);

}
#endif
#if 0
void main(void)
{
    while(1){
        if(printf("%d",printf("%d")))
            continue;
        else
            break;
    }
}
#endif
#if 0
int main(void)
{
    int a = 10;
    char c = 2;
    float val = 2;
    double val1 = 2;
    int *ptr = &a;
    int *ptr1 = &a;
    int b = 20;
    if(ptr+1 >= ptr1-1)
        printf("both are equal:\n");
//    a^=b^=a^=b;
    a = (a*b)/(b = a);
    printf("a = %d\n b = %d\n",a,b);
    printf("%d\n",*ptr);

}
#endif
#if 0
int main(void)
{

    int arr[50] = {1,2,3,4,5,56,6};
    printf("size = %d\n",sizeof(arr));
    printf("size = %d\n",sizeof(arr+1));
    printf("size = %d\n",*(arr+6));


}
#endif
#if 0
int main(void)
{
    int arr[] = {1,2,3,4,5,6,7};
    int (*ptr)[7] = &arr;
    int *ptr1 = &arr;
    printf("%p\n%p\n",*ptr,*ptr+1);
    printf("%d\n%d\n",**ptr,**ptr+1);
    printf("%d\n",*(*ptr+6));
    printf("%d\n",*ptr1);
    printf("size = %d\n",sizeof(*ptr));
    printf("size = %d\n",sizeof(ptr1));

}
#endif
#if 0
int main(void)
{
    int arr[][3][2] = {1,2,3,4,6};
    int (*ptr)[3][2] = arr;
    printf("%d\n",***(arr+0));
    printf("%d\n",**(*ptr+1));
    printf("size = %d\n",sizeof(ptr));
    printf("size = %d\n",sizeof(*ptr));
    printf("size = %d\n",sizeof(**ptr));
    printf("size = %d\n",sizeof(arr));
}
#endif
#if 0
int *fun(void)
{
    int x = 5;
    int *ptr = &x;
    return ptr;

}
int main(void)
{
    int *ptr = NULL;
    
    ptr = fun();
    sleep(2);
    printf("%d\n",*ptr);
}
#endif
#if 0
//int fun(int (*ptr)[])
int fun(int **ptr)
{
    printf("size = %d\n",sizeof(ptr));
    printf("length = %d\n",strlen((char *)ptr));
 //   printf("%d\n",*(*ptr+1));
   // printf("%d\n",*(*ptr+1));
    printf("%d\n",*ptr);
}
int main(void)
{
    int arr[][4] = {256,2,3,4,4,5,6,7,8,9};
    fun(arr);

}

#endif
#if 0
int fun(int *arr[])
{
    arr = *arr+1;
    printf("%d\n",**arr);


}
int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    
    fun(arr);

}
#endif
#if 0
int main(void)
{
    char *arr[] = {"aaaaaaa","BBBBBB","cccccc","ddddddd"};
    char **ptr = arr;
    printf("%s\n",++ptr);
     printf("%s\n",*ptr++);
     printf("%s\n",*ptr);
    printf("%s\n",*ptr+4);
   // printf("%s\n",++ptr,*ptr++,*ptr+1);
}
#endif
#if 0
int main(void)
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr[3] = {arr};
    // ptr[0] = arr[0];
    //    ptr[1] = arr[1];
    //    ptr[2] = arr[2];
    //    printf("%d\n",*(ptr[0] + 4));
    //    printf("%u\n",ptr);    
    printf("%d\n",*(++ptr[0]));
    printf("%d\n",*(*ptr+1));

}
#endif
#if 0
int main(void)
{
    int a = 128;
    float b = 34.45;
    char c  = 67;
    int *ptr = &b;
    void **ptr1 = &ptr;
//    printf("%f\n",*(float *)*ptr1);
    printf("ptr = %p\n",ptr1);
    printf("ptr+1 = %p\n",ptr1+1);


}
#endif
#if 0
int main(void)
{
    int *ptr = malloc(-3);
    printf("ptr = %p\n",ptr);
    ptr = realloc(ptr,-1);
    printf("ptr-2 = %s\n",ptr);

}
#endif
#if 0
int main(void)
{
//    int (*ptr)[2];
  int *ptr[2];
    int col ;
    int i,j;
    printf("enter number of rows:");
    scanf("%d",&col);
    ptr[0] = malloc(2*col*sizeof(int));
    for(i = 0;i<2;i++){
        for(j = 0; j<2;j++){
            scanf("%d",(ptr[i]+j));
        }
    }
    for(i = 0;i<2;i++){
        for(j = 0; j<2;j++){
            printf("%p\n",&ptr[i][j]);
        }
    }


}
#endif
#if 0
int fun(int arr[10])
{
    printf("size = %d\n",sizeof(&arr));
    int x = 20000;
    *arr = x;
}

int main(void)
{

    int arr[] = {1,2,3,4,5,6,7};
    fun(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[10]);

}
#endif
#if 0
int *fun(void)
{
    int j = 10;
    int *p = malloc(10);
    *p = 2000;
    return p;
    //    return &j;

}
int main(void)
{
    int *ptr;
    ptr = fun();
    sleep(5);
    printf("ptr = %d\n",*ptr);
}
#endif
#if 0
int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    printf("%d\n",arr[3]);
    arr[1,2,3,(4,5),( 1,2,3)] = 2000;
    printf("%d\n",arr[3]);
    printf("%d\n",arr[5]);

}
#endif
#if 0
union tag{
    int a;
    char *ptr;
//}val = {"anand"};
}val = {1024};
int main(void)
{
    int *ptr1 = val.a;
//    printf("%s\n",val.ptr);
    printf("%p\n",val.ptr);
    printf("%p\n",val.a);
    printf("%p\n","anand");
    printf("%s\n",ptr1);
    printf("%c\n",*(val.ptr+4));
    printf("%c\n",(val.ptr[1]));

}
#endif
#if 0
int main(void)
{
    int *ptr = NULL;
    int *ptr1 = NULL;
    ptr = malloc(100);
    printf("ptr = %p\n",ptr);
    ptr1 = malloc(200);
    printf("ptr1 = %p\n",ptr1);
    free(ptr);
    free(ptr1);
    ptr = malloc(50);
    printf("ptr = %p\n",ptr);
    ptr1 = malloc(50);
    printf("ptr1 = %p\n",ptr1);
    ptr = malloc(50);
    printf("ptr = %p\n",ptr);
    ptr = malloc(50);
    printf("ptr = %p\n",ptr);

}
#endif
#if 0
int main(void)
{
    int *ptr = malloc(10);
    int *ptr1 = malloc(10);
    printf("%p\n",ptr);
    printf("%p\n",ptr1);
    free(ptr1);
    free(ptr);
    free(ptr1);
}
#endif
#if 0
struct tag{
    int   : 0;
    int a : 8;
    int   : 8;
//    int   : 0;
    int b : 16;
}val;
int main(void)
{
    printf("size = %d\n",sizeof(val));

}
#endif
#if 0
int main(void)
{
    int num;
    int i = 0;
    int j = 31;
    printf("enter the number:");
    scanf("%d",&num);
    for(i = 0,j = 31;(((num >> i)&1) == ((num >>j)&1))&&(i<16);i++,j--);
    if(i == 16)
        printf("bitwise palindrome:\n");
    else
        printf("not a bitwise palindrome:\n");

}
#endif
#if 0
int is_mul(int n)
{
    int odd_ct = 0;
    int even_ct = 0;
    int i = 0;
    if(n == 0)
        return 1;
    if(n == 1)
        return 0;
    for(i = 0;i<32;i++){
        if( (n>>i)&1){
            if(i&1)
                odd_ct++;
            else
                even_ct++;
        }
    }

/*    while( n ){
        if(n & 1)
            odd_ct++;
        n = n >> 1;
        if(n & 1)
            even_ct++;
        n = n >> 1;

    }*/
    return(is_mul(abs(even_ct - odd_ct)));

}
int main(void)
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(is_mul(num))
        printf("multiple of 3:\n");
    else
        printf("not a multiple of 3:\n");

}
#endif
#if 0
int main(void)
{
    int arr[] ={1,2,3,4,5,6,7};
    // int (*ptr)[7] = {&arr};
    typedef int* val;
    val ptr[7] = {arr};
    int **def = ptr;
    int (*rt)[7] = &arr;
    printf("%d\n",*(*ptr+5));
    printf("%d\n",*(*def+5));
    printf("size = %d\n",sizeof(*def));
    printf("size = %d\n",sizeof(*ptr[0]));
    printf("size = %d\n",sizeof(*rt));

}
#endif
#if 0
typedef struct tag ST;
 struct tag{
    int val;
    int a;
    int b;
    ST *link;
};
int main(void)
{
    int arr[10];
    struct tag  const head;
    printf("size = %d\n",sizeof head);
//    printf("size = %d\n",sizeof int);
//    head.a = 2342;
}
#endif
#if 0
struct tag{
    char *ptr;
    int l;
}head[] = {"anand",1,"kumar",2,"yadav",3,"2323"};
int main(void)
{
    printf("size = %d\n",sizeof head);
    printf("%s\n",head[3].ptr);
    printf("%d\n",head[1].l);


}
#endif
#if 0
union tag{
    char *ptr;
    int l
}head[] = {"aAAA",2323,"asdasd",1223,"werre",1233};
int main(void)
{
    printf("%s\n",head[0].ptr);
    printf("%p\n",head[0].l);
}
#endif
#if 0
int out;
//int arr[];
extern int out = 877;
int fun(int a, int b)
{
    int c;
    c = a+b;
//    return sizeof fun+1;
    c = a*34+b;
}
int main(void)
{
    extern int arr[];
    int a = 10;
    int b = 20;
//    arr[2] = 2375;
 //   printf("%d\n",arr[2]);
    printf("%d\n", fun(a,b));
//    printf("in main:%d\n",out);
}
// out = 100;
//arr[2] = 3000;
//out;
#endif
#if 0
int main(void)
{
    int i = 2;
    int j = 0;
    switch (i)
    {
        case 2:
            for(j = 0;j<5;j++)
                printf("hi\n");
                continue;


    }
}
#endif
#if 0
int main()
{
    int a=5,b=6;
    a = a++;
    b = ++b;
    printf("%d,%d\n",a,b);
    return 0;
}
#endif
#if 0
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d", (n<<3) + n);
//    getch();
}
#endif
#if 0
int main(void)
{
    int pid;
    int a = 10;

    pid = fork();
    if(pid > 0){
        printf("parent context:\n");
        printf("a = %d\n",++a);

    }
    else if(pid == 0){
        printf("child context:\n");
        printf("a = %d\n",++a);
    }


}
#endif
#if 0
int main(void)
{
    int *ptr = NULL;
    int *ptr1 = NULL;
    ptr = malloc(10);
    *(ptr-1) = 488;
    //    ptr++;
    ptr1 = realloc(ptr,0);
    //    free(ptr);
}
#endif
#if 0
int main(void)
{
    int arr[] [3] = {1,2,3,4,5,6,7};
    //    int **ptr = arr;
    //  int (*ptr1)[3] = arr;
    int *ptr1[] = {*arr,NULL};
    printf("%d\n",*(*ptr1+1));

}
#endif
#if 0
int main(void)
{
    int i = 3;
    int j = 3;
    int arr[3][3];
    int tran[3][3];
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            tran[j][i] = arr[i][j];

        }
    }
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            printf("%d  ",tran[i][j]);

        }
    }
    putchar('\n');
    int p = 0;
    int q = 2;
    for(i = 0;i < 3;i++){
        tran[i][p] = tran[i][p] ^ tran[i][q];
        tran[i][q] = tran[i][p] ^ tran[i][q];
        tran[i][p] = tran[i][p] ^ tran[i][q];
    }
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            printf("%d  ",tran[i][j]);

        }
    }

}
#endif
#if 0
int main(void)
{
    int i = 0;
    if(07)
        for(i = 0 ;i<5;i++)
        if(1){
        printf("hello world:\n");
        }
    
    else
        printf("sdfsdfsdff:\n");

    else if(1)
        printf("in else if:\n");

}
#endif
#if 0
int main(void)
{
    int i = 0;
    int arr[i];
    printf("size = %d\n",sizeof(arr));
    printf("enter value:");
    scanf("%d",&i);
    printf("size = %d\n",sizeof(arr));
}
#endif
#if 0
int main(void)
{
    int *ptr;
    ptr = fun();
    printf("%d\n",*ptr);


}
#endif
#if 0
#pragma pack(push,2)
/*struct tag{
    short int a:9;
    short b ;
    short :6;
    char :0;
    short int e;
    short :1;
}val;*/
struct tag{
    int a:6;
    //    int d;
    char c:8;
    short b:8;
    short d :10;
}val;    
int i = -1;
int fun(char *arr)
{
    if(*arr){
        if(*arr){
            i++;
            fun(arr+1)
        }
        for(  ; arr);
    }
}
int main(void)
{
    int a = 10;
    int b = 20;
    char arr[] = "anandkumar";
//    fun(a,b);
    fun(arr);
    printf("sz= %d\n",sizeof val);

}
#endif
#if 0
int fun()
{
    printf("in function:\n");
}


int main(void)
{
    signal(SIGUSR1,fun);
    int *ptr;
    printf("%d\n",*ptr);
    pause();



}
#endif
#if 0
int main(void)
{
    char s[] = "anand%skumar";
    int ptr = 23423;
    char ch = 'asfdf';
//    scanf("%c",ch);
//    scanf("%d \n %c",&ptr,&ch);
//    sprintf(s,"%s","globaledge");
    fclose(stdout);
    freopen(NULL,"w",stdout);
//    scanf("%s",&ptr);
//    perror("scanf");
    printf("%d\n",ptr);
    printf("%c\n",ch);
    //    printf("%s",s);
 //   printf("%4d\n",printf("12345\n"));

}
#endif
#if 0
int main(void)
{
    char *ptr;
    char buf[40] ;
    ptr = fgets(buf,23,stdin);
    printf("%s",buf);
    printf("%s",ptr);
    puts("askajsdhad");

}
#endif
#if 0
int main(void)
{
    int a = 345;
    void *v[10] = {&a};;
    char *w = L"anand";
    int *b;
    void*ptr = &a;
    b = ptr;
  //  v[0] = 3287;

    printf("%d\n",*(char *)ptr);
    printf("%c\n",*(w+5));
    printf("%d\n",*(int *)v[0]);
}
#endif
#if 0
struct tag{
    int a:23;
    int b;
    int c;
}*head;
int main(void)
{

    float a = 23.2323;
    int b = 223.233;
    b = 1,2,3,4,5;
    int c = 2322 & 3434;
    head = malloc(sizeof(struct tag));
    head->a = 232;
    head->b = 566;
    head->c = 989;
    printf("a = %d\n",(*head).c);
    printf("%p\n",&main);
    printf("size = %d\n",sizeof(head-> b));
    printf("size = %d\n",sizeof(main));
    printf("b = %d\n",b);
//   printf("size = %d\n",sizeof(head-> a));
    printf("%d\n",2434/1);
    printf("shift = %d\n",(unsigned )10>>-3);

}

#endif
#if 0
int fun(int a, int b, int c)
{
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
}
int main(void)
{
    int c = 34;
    unsigned    int *ptr = &c;
    unsigned int *ptr1 = &c;
    char a;
    unsigned char b;
    int t = 0;
    (ptr1 == ptr) ? a = 128:(b = 128);
    printf("a = %d\n",a);
//    a *= 10 *a = 10;
    fun(a,(t = 20,t = t+20,t = 0),20);

}
#endif
#if 0
int c = 1;
struct tag{
    int a;
    int b;
   struct tag *link;
} 
//int a = 10;
int fun(int a)
{
    char cl = 'a';
    a = 44;
    printf("a = %d\n",sizeof a);
    printf("a = %d\n",sizeof int);

}
int main(void)
{
 int a = (100,23);
    fun(a);
}
#endif
#if 0
struct tag {
    int tag;
    struct tag1{
        int b;
        struct tag2 *link;
    };
    
}val;


int main(void)
{
    int (*p)[10];
  //  printf("%d\n",p++);
    //  val.val1.b = 2323;
        struct tag val;
    struct tag1 val2;
    //    printf("size = %d\n",sizeof(val));
    // val = malloc(12);
    //   printf("size = %d\n",sizeof(val.link));

//       printf("size = %d\n",sizeof(struct tag3));
    //printf("%d\n",val.val1.b);
        printf("size = %d\n",sizeof(*p));
        printf("size = %d\n",sizeof(p));
}
#endif
#if 0
union tag{
    struct{
    int  a ;
    };
    struct{
        int b;
        int c;
    };
    struct {
       int d;
        double x;
    };
     double p;
    int v;
//    int arr[];
}val;
int fun()
{
//    int val = max;



}
enum tag1{mon};
int main(void)
{
        int mon = 98789;
        val.x = 1024.8746;
        printf("size = %d\n",sizeof(val));
        printf("size = %f\n",val.x);
        printf("size = %d\n",val.a);
        fun();
        printf("mon = %d\n",mon);

}
#endif
#if 0
int main(void)
{
    int a = 10;
    int aw23 = 10;
    int **ptr;
    const int pi,*cpi = &a;
//    *cpi = 200;
    ptr = &cpi;
    ++**ptr;
    printf("a = %d\n",a);
    printf("*cpi = %d\n",*cpi);
    printf("**ptr = %d\n",**ptr);

}
#endif
#if 0
int a = 987;
struct tag{
    int a:4;
    int :0;
    int c :5;
}val= {3,5,6};    
int main(void)
{
    int arr[] = {('a',233,a)};
    char *ptr = L"anandkumar";
    printf("%d\n",arr[0]);
    printf("%d\n",val.a);
    printf("%d\n",val.c);
    printf("size = %d\n",strlen(ptr));


}
#endif
#if 0
extern a = 100;
int main(void)
{
    typedef int *val;
    int a;
    auto val x = &a;
    *x = 6786;
    int arr[2][3] = {{1},{2},3,4,5,6};
    printf("%d\n",arr[0][2]);
    printf("a = %d\n",a);
   // fun();

}
#endif
#if 0
struct tag{
    int a;
    int b[];
}*head;
int main(void)
{
    head = malloc(0 + 56);
    strcpy(&head->b,"sadasdklsdjfksdjfskldjskdjfskldsfj");
    printf("%s\n",head->b);
    free(head);
    return 4<5?1:0;
}
#endif
#if 0
#include "link.c"
int main(void)
{

    printf("a = %d\n",a);
 //   fun();


}
#endif
#if 0
struct tag{
    int a;
    int b[0];
}val;
int main(void)
{

    printf("size = %d\n",sizeof(val.b[0]));
    printf("size = %d\n",sizeof(val));

}
#endif
#if 0
struct {
    short op;
    union {
        int i;
        struct {
            struct { } s;
            char foo[];
        };
    };
}val;
int main(void)
{

    printf("size = %d\n",sizeof(val));

}
#endif
#if 0
#include "stdlib.h"
int main()
{
    int as_df;
     int *pInt;
      int **ppInt1;
       int **ppInt2;

        pInt = (int*)malloc(sizeof(int));
         ppInt1 = (int**)malloc(10*sizeof(int*));
          ppInt2 = (int**)malloc(10*sizeof(int*));

           free(pInt);
            free(ppInt1);
            printf("%d\n",*ppInt2);
             free(*ppInt2);
              return 0;
}
#endif
#if 0
# include <stdio.h>
int main( )
{
    static int a[] = {10, 20, 30, 40, 50};
    static int *p[] = {a, a+3, a+4, a+1, a+2};
    int **ptr = p;
    ptr++;
    printf("%d%d", *ptr - *p, **ptr);
            
}
#endif
#if 0
#define pack(a,b) a##b
int main(void)
{

    int c = pack(20,30);


}
#endif
#if 0
int k = 0;
int val = 0;
int rec(int l,int num)
{
    int t ;
    int r;
    int temp = l;
    while(l){
        t = l%10;
        r = r*10+t;
        l = l/10;
    }
    if(temp == r)
        printf("palindrome : %d\n",temp);

        val++;

    if(val <= num){
        rec(k++,num);
    }


}
int main(void)
{
    int num = 40;
    int less = 0;
    rec(less,num);

}
#endif
#if 0
unsigned short int fun(unsigned short int val)
{
    
    unsigned short int num = ((unsigned short int )val << 8) | ((unsigned short int)val >> 8);

  //  num = ((val&(0x0000ff00))>>8) | (val&(0x000000ff)) << 8;

  /* char *arr = (char *)&val;
    char ret[2];
    short int big;
    ret[1] = *arr;
    ret[0] = *++arr;
    big = *(short int *)ret;
    return big;*/

    return num;
}

int main(void)
{

    unsigned short int num = 34567689;

    unsigned short int ret;

    ret = fun(num);

    printf("big endian:%x\n stan : %x\n",*(unsigned short int *)&ret,htons(num));

}
#endif
#if 0
#include <stdio.h>

int main(int argc, char **argv) {

    union {
        short s;
        char c[sizeof(short)];
    }un;

    un.s = 0x0102;

    if (sizeof(short) == 2) {
        if (un.c[0] == 1 && un.c[1] == 2)
            printf("big-endian\n");

        else if (un.c[0] == 2 && un.c[1] == 1)
            printf("little-endian\n");

        else
            printf("unknown\n");
    }
    else {
        printf("sizeof(short) = %d\n", sizeof(short));
    }

    exit(0);
}
#endif
#if 0
int main(void)
{
    int i = 97;
    putchar(i);
    putchar(0);
    char a,b,c = 'a';
/*    printf("%d\n",scanf("%c %c %c",&a,&b,&c));
    putchar(getchar());
    putchar(getchar()); */
    while(c++ <= 'z') 
            putchar(c);


}


#endif
#if 0
int main(void)
{
    char wear[80];
    int a,b,c;
    a = b = c = 30;
    sprintf(wear,"%d%d%d",a,b,c);
    puts(wear);
    printf("%d\n",wear);
}
#endif
#if 0
int main(void)
G{
    int arr[] = {1,2,3,4,5};
    int n = 2;
    arr[++n] = n++;
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr[2]);

}
#endif
#if 0
int main(void)
{
    int row;
    int col;
    int i = 0;
    int j = 0;
    printf("enter row and colm:");
    scanf("%d\n%d",&row,&col);
    int (*p)[col];
    p = malloc(row*col*4);
    for(i = 0;i<row;i++){
        for(j = 0 ;j<col ;j++){
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("entered values:\n");
    for(i = 0;i<row;i++){
        for(j = 0 ;j<col ;j++){
            printf("addr = %p    = %d\n",*(p+i)+j ,*(*(p+i)+j));
        }
    }
}
#endif
#if 0
int main(void)
{
    char arr[][3] = {"abc","def","ghi"};
    char (*ptr)[3] = arr;
    printf("ptr = %s %s\n",ptr,ptr+1);
}
#endif
#if 0
int main(void)
{
 char *c[] = {"ENTER","NEW" ,"POINT","FIRST"} ;

 char **cp[] = { c+3, c+2, c+1, c};
 char ***cpp = cp;
 printf("%s", **++cpp );
 printf("%s ", *--*++cpp+3 );
//       printf("%s", *cpp[-2]+3 );
//   printf("%s~n", cpp[-1][-1]+1 );
}
#endif
#if 0
enum {false,true};

int main()
{
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
        if(i < 15)
            continue;
    }while(false);
    return 0;
}

#endif
#if 0
int main()
{
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    return 0;
}
#endif
#if 0
void foobar1(void)
{

    printf("In foobar1\n");

}
int main()
{
    char ch = 'a';
    foobar1();
    foobar2(33, ch);
    return 0;
}
#endif
#if 0
int main()
{
    int a=1;
    switch(a)
    { 
        int b=20;
        case 1: printf("b is %d\n",b);
                break;
        default:printf("b is %d\n",b);
                break;
    }
    return 0;
}
#endif
#if 0
#define SIZE 10
void size(int arr[SIZE])
{
    printf("size of array is:%d\n",sizeof(arr));
    printf("size of array is:%d\n",*arr);
}

int main()
{
    int arr[SIZE];
    arr[0] = 9898;
    size(arr);
    return 0;
}
#endif
#if 0
#define SIZEOF(arr) (sizeof(arr)/sizeof(arr[0]))
#define PrintInt(expr) printf("%s:%d\n",#expr,(expr))
int main()
{
    /* The powers of 10 */
    char pot[] = {'a','b','c','d','e'};
    int i;
    printf("%s\n","pot[0]");
}
#endif
#if 0
#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))
int main()
{
    int y = 100;
    int *p;
    p = malloc(sizeof(int));
    *p = 10;
    y = (y / *p); /*dividing y by *p */;
    PrintInt(y);
    return 0;
}
#endif
#if 0
#include <stdio.h>
int fun(int *ptr[])
{
//    printf("%d\n",*(*(ptr-1)+1));
    printf("%d\n",*(ptr+1));
}
int main()
{

    int arr[] = {1,2,3,4,5,6};
//    int **ptr;
//    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int *ptr[3] = {arr};
//    int (*ptr)[3] = arr;
    int (*pt)[3] = (arr,arr+1,arr+2);
//       printf("val = %d\n",*(*(ptr+3)-1));
    printf("size = %d\n",sizeof(*ptr));
//    printf("size of arr= %d\n",sizeof(pt[0]));
    printf("1d = %d\n",*ptr[0]);
    printf("1d+2 = %d\n",*(ptr[0]+1));
 //   printf("1d+2 = %d\n",*(ptr[1]+1));
      printf("%d\n",*(*pt+2));
  //  printf("%d\n",*(*(pt+1)-1));
//    printf("%d\n",*(*arr+1));
//    printf("size = %d\n",sizeof(*arr[1]));
//    printf("%d\n",*(*pt+1));
//  printf("%d\n",**(pt+1));
    
//    fun(&arr);
}
#endif
#if 0
int fun(char (**ptr1)[3])
{
 //   printf("%s\n",*ptr1);
 //   printf("%s\n",*(ptr1+1));
    //    printf("after  = %p\n",ptr1);
    //  printf("after  = %p\n",*ptr1);
    //    printf("%c\n ",*ptr1+1);
    //    char *ptr = *ptr1;
    //    printf("%s\n",ptr);
//    printf("%s\n",**ptr1);

}
int main(void)
{

 //   char arr[][5] = {"aaaa","cccc","cccc","dddd"};
    // char **ptr = arr;
    //    char *ptr = arr;
    //char (*ptr)[3] = arr;
    char *ptr[4] = {"aaaaa","bbbbb","ccccc","dddddd"};
    //   printf("ptr = %p\n" ,ptr);
    //    printf("ptr = %p\n" ,ptr+1);
   // printf("%c \n" ,++*(ptr[0] + 1));
    printf("%s \n" ,++(ptr[0]));
    printf("before  = %p\n",ptr);
    printf("before  = %p\n",*ptr);
//    fun(ptr);

}
#endif
#if 0
int main(void)
{

    int arr[][4] = {1,2,3,4,5,6,7};
    //    int (*ptr)[4] = arr;
    //   printf("%d\n",*(*(ptr+1)-1));
    int (*ptr[3])[4] = {arr,arr+1};
    //  printf("%d\n",*(*(ptr+1)-1));

    printf("%d\n", *(*(*ptr)+1) );   
    printf("%d\n",  *(**(ptr+1)+1));

    printf("size = %d\n",sizeof(ptr));
    printf("size = %d\n",sizeof(*ptr));
    printf("size = %d\n",sizeof(**ptr));
    printf("size = %d\n",sizeof(***ptr));
    /*    int (*ptr)[4] = arr;
          printf("%d\n",*(*(ptr+1)+1));*/

}
#endif
#if 0
int main(void)
{

    char *ptr[] = {"aaaa","bbbbbbb","ccccc","ddddd"};
    char **arr = ptr;
    char ***arr1 = ptr;
      printf("%s\n",*arr++);
       printf("%s\n",*arr);
    printf("%c\n",**++arr);
//    printf("size = %d\n",sizeof(ptr));
    printf("%s\n",*arr1+1);


}
#endif
#if 0
int main(void)
{

    int arr[] = {1,2,3,4,5,6};
    
    int *ptr[] = {arr, arr+2 ,arr+3,arr+4};
    
    int **ptr1 = ptr;

    ptr1++;

    *ptr1++;

    printf("%d  %d   %d \n",ptr1-ptr,*ptr1-arr,**ptr1);
    
    *++ptr1;
    
    printf("%d  %d   %d \n",ptr1-ptr,*ptr1-arr,**ptr1);

}
#endif
#if 0
#include <stdio.h>

int main()
{
    float f=0.0f;
    int i;

    for(i=0;i<10;i++)
        f = f + 0.1f;

    printf("%f\n",f);
    if(f == 1.0f)
        printf("f is equal 1.0 \n");
    else
        printf("f is NOT equal to 1.0\n");

    return 0;
}

#endif
#if 0
int main()
{
    int main = 90789;
    printf("main = %d\n",main);
    int a = 10;
    //    if (a == a--)
    //      printf("TRUE 1\t");

    //      a = 10;
    if (a == --a)
        printf("TRUE 2\t");
}
#endif
#if 0
int main(void)
{
    char *ptr[] = {"aaaa","bbbbb","ccccc","ddddd"};
    
    char *pt  = *ptr;

    printf("%c\n",*pt);

}
#endif
#if 0

char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
char **cp[] = {c+3, c+2, c+1, c};
char ***cpp = cp;

int main()
{
    printf("%s ", **++cpp);
    printf("%s ", *--*++cpp+3);
    printf("%s ", *cpp[-2]+3);
    printf("%s ", cpp[-1][-1]+1);
    return 0;
}
#endif
#if 0
void fun(char** str_ref)
{
    *str_ref = *str_ref+1;
}
int main()
{
    char *str = (void *)malloc(100*sizeof(char));
    strcpy(str, "GeeksQuiz");
    fun(&str);
    puts(str);
    free(str);
    return 0;
}
#endif
#if 0
void f(char**);
int main()
{
        char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
            f(argv);
                return 0;
}
void f(char **p)
{
        char *t;
            t = (p += sizeof(int))[-1];
                printf("%s\n", t);
}
#endif
#if 0
int main(void)
{
    int a[][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3] = a;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);
    return 0;
}
#endif
#if 0
int main(void)
{
    int i;

    int *ptr = (int *) malloc(5 * sizeof(int));
    
    for (i=0; i<5; i++)
        *(ptr + i) = i;
    
    printf("%d ", *ptr++);
    printf("%d ", (*ptr)++);
    printf("%d ", *ptr);
    printf("%d ", *++ptr);
    printf("%d ", ++*ptr);

}
#endif
#if 0
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1; 
    z  = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

void main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b; 
    printf( "%d", f(c,b,a));
    getchar();
}
#endif
#if 0
int main()
{ 
       unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, 
                                      {7, 8, 9}, {10, 11, 12}};
          printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}
#endif
#if 0
int main(void)
{
    
    static int a[] = {10, 20, 30, 40, 50};
    static int *p[] = {a, a+3, a+4, a+1, a+2};
    int **ptr = p;
    ptr++;
    ++ptr;
    printf("%d%d", ptr-p, **ptr);
    printf("%s",NULL);

}
#endif
#if 0
int r = 3;
int c = 3;
int main(void)
{
    int i = 0;
    int j = 0;
    int **ptr = NULL;
    ptr = malloc(4);
    ptr[0] = malloc(r*c*4);
    for(i = 0;i <3 ;i++)
        ptr[i] = ptr[0] + i*3;
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            scanf("%d",&ptr[i][j]);
        }
    } 
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            printf("%p  = %d\n",&ptr[i][j],ptr[i][j]);
        }
    } 

}
#endif
#if 0
int main(void)
{
    int a,b,c,d,e[30],*f;
    f = malloc(23);;
    a = sizeof (short);
    b = sizeof e;
    printf("%d %d\n",a,b);
}
#endif
#if 0
int arr[] = {1,3};
int main(void)
{
    void *vp;
    char *str = "anand";
    vp = &arr[1];
    printf("%d\n",(int *)vp);
    vp = str;
    printf("%s\n",vp);


}
#endif
#if 0
union tag{
    int a;
    char b;
    struct tag1 *ptr;


    float c;
}val = {23.23,34};
int main(void)
{
    enum { jan,feb,mar,val};

    printf("%d\n",val.a);

}
#endif
#if 0
int main(void)
{
    int val = 876;
    void *ptr = &val;
    void **ptr1 = &ptr;
    printf("%d\n",*(int *)*ptr1);
    ptr = malloc(10);
    printf("%d\n",*ptr);
}
#endif
#if 0
int add(int a, int b)
{
    return a*b;
}
int main(void)
{
    char arr[][10] = {"aaaaaaaa","bbbbbb","cccccc","dddddd","eeeeee"};
    char *ptr = arr;
    printf("%s\n",ptr);
    char **ptr1 = ptr;
//    printf("%s\n",*ptr1);
    ++ptr1;
    *++ptr1;
    ++*ptr1;
//    printf("%c\n",**ptr1); 
    typedef int (*fun)(int , int);
    fun val;
    val = add;
    printf("%d\n",val(2,3));

}
#endif
#if 0
int sum(int a,int b)   //sum is the function returned by call
{
    return a+b;
}

int (*call(void) ) (int ,int);

int main(void) 
{
    int (*p)(int,int);   // way to declare a function pointer
    p=call();
    printf("%d\n",(*p)(8,3));
}
int( *call(void) )(int,int) 
{
    return sum;
}
#endif
#if 0
int main(void)
{

    char **ptr[] = {"dskjhdfj" ,"kjdsfjd", "sakdsj","jkdfhdf","wererr"};
    char **ptr1 = ptr;
    printf("%s %s %s  %s\n",*ptr1++,*ptr1++,*--ptr1,*ptr1++);
    char *str[] = {*ptr1++,*--ptr1,*--ptr1,*ptr1++,*ptr1};
    char **str1 = str;
    printf("size = %d\n",sizeof(*ptr1));
    printf("size = %d\n",sizeof(**ptr1));
    printf("%s %s %s %s %s\n",*str1,*++str1,*str1++,*++str1,*str1--);

    int (*pt)[5] = str;
    printf("1d = %s\n",**pt);
    printf("1d = %s\n",*(*pt+1));
    printf("size = %d\n",sizeof(*pt));
    printf("size = %d\n",sizeof(ptr));
}
#endif
#if 0
int main(void)
{
    char ptr[][10] = {"aaaaaaa","bbbbbb","cccccc","ddddddd","fffFFFF"};
    char *ptr1[] = {ptr,ptr+1,ptr+4,ptr+3 };
    char **str1 = ptr1;
    printf("%s   %s   %s   %s\n",*str1++,*++str1,*--str1,*++str1);
 
    char **str[] = {--str1,++str1,++str1,--str1};
 
    char ***val = str;
 
    printf(" %s %s %c %c  %s  %s\n",**str,**val,***val++,***++val,**--val,**val++);
    
    printf("size = %d\n",sizeof(ptr));
    printf("size = %d\n",sizeof(ptr1));
    printf("size = %d\n",sizeof(*ptr1));
    printf("size = %d\n",sizeof(str1));
    printf("size = %d\n",sizeof(*str1));
    printf("size = %d\n",sizeof(**str1));
    printf("size = %d\n",sizeof(str));
    printf("size = %d\n",sizeof(*str));
    printf("size = %d\n",sizeof(**str));
    printf("size = %d\n",sizeof(val));
    printf("size = %d\n",sizeof(*val));
    printf("size = %d\n",sizeof(**val));
    printf("size = %d\n",sizeof(***val));

}
#endif
#if 0
int main(void)
{
    int val1 = 3234;
    int val = &val1;
    int **ptr = &val;
   // printf("%d\n",**ptr);
    int (*p)[1] = &val1;
   // int *p[1] = 0;
    printf("%d\n",*++*p);
   // printf("p = %p\n",p);
   // printf("*p = %p\n",*p);

}
#endif
#if 0
int main(void)
{
    int arr[3][3];
    int i,j;
    for( i = 0;i<3;i++){
        for(j = 0; j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    i = 0;
    j = 0;
    while( i < 3){
        printf("%d\n",arr[i][j]);
        if(j == 2){
            j = 0;
            i++;
        }
        else{
            j++;
        }
    }

}
#endif
#if 0
int main(void)
{

    int a = 10;
    int *ptr = &a;
    printf("%u %u \n",*&ptr,&*ptr);

}
#endif
#if 0
int main(void)
{
    char arr[] ="globaledgesoftwarelimitedbanglore";
    int i = 0;
    int j =0;
    static char temp[100];
    char *ptr1 = arr;
    char *ptr2 = arr;
    j = strlen(arr)-1;
    int k = 0;
    int p = 0;
    int l = 0;
    int x = 0;
    while(ptr1 <= ptr2 && i < j){
        if(k == 0){
            p = ++l;
            while(p){
    //            printf("%c ",ptr2[j]);
                temp[x++] = ptr2[j];
                j--;
                p--;
            }
            k++;
        }
        if(k > 0){
            p = ++l;
            while(p){
  //              printf("%c  ",ptr1[i]);
                temp[x++] = ptr1[i];
                i++;
                p--;
            }
            k =0;
        }
    }
    printf("\nafter = %s\n",arr);

    printf("\nafter = %s\n",temp);
//    strcpy(arr,temp);
//    printf("\nafter = %s\n",arr);
}
#endif
#if 0
int fun()
{
    printf("in function:\n");


}
int main(void)
{
    int size = 3;

    int a = 87;
    int b = 78;
    fun(a,b),fun(),fun();



}
#endif
#if 0
int main(void)
{
    sem_t *ptr;
    int val = 0;
    ptr = sem_open("/sem",O_RDWR|O_CREAT,0777,3);
    perror("sem");
    sem_getvalue(ptr,&val);
    perror("sem");
    printf("before val = %d\n",val);
    getchar();
    sem_post(ptr);
    sem_getvalue(ptr,&val);
    printf("after val = %d\n",val);

}
#endif
#if 0
int main(void)
{
    int arr[] = {1,2,3,4,5};
    char *ptr = &arr[2];
    int *ptr1 = &arr[3];
    printf("%d\n",ptr1 - (int *)ptr);
}
#endif
#if 0
int main()
{
    int ary[2][3] = {1,2,3,4,5,6,7,8};
    foo(ary);
}
void foo(int (*ary)[3])
{
    int i = 10, j = 2, k;
    printf("%d\n",**ary++);
    printf("%d\n",**ary);
  //  ary[0] = &i;
  //  ary[1] = &j;
  // *ary[0] = 2;
  //  for (k = 0;k < 2; k++)
  //      printf("%d\n", *ary[k]);
}
#endif
#if 0
int main(void)
{
    int ary[][3] = {1,2,3,4,5,6,7,8,9};
    foo(ary);
    printf("%d\n",ary[0][0]);

}
void foo(int (*ary)[10])
{
    int  val;
    int *ptr = 234;
    int i = 10, k = 10, j = 2;
    // int *ary[2];
    *ary[0] = 2323;
    //  *ary[1] = 4534;
    //    printf("%d\n", ary[0][1]);
}
#endif
#if 0
struct tag{

    int (*arr[4])(int *, int *);

}obj;
int add(int *a, int *b)
{
    return *a + *b;
}
int main(void)
{
    int i = 10;
    int j = 20;
    obj.arr[0] = add;
    printf("add = %d\n",obj.arr[0](&i,&j));
    printf("size = %d\n",sizeof obj);
}
#endif
#if 0
int main(void)
{

        int *ptr[] = {0,1,2,3,4};
        printf("%p\n",ptr[0]++);
        printf("%p\n",ptr[0]);
        printf("%p\n",++ptr[1]);
        printf("%p\n",++ptr[2]);


}
#endif
#if 0
int main()
{
    int a = {1,2,3,4};
    int *ptr[5] = {{1,2,3,4},{5,6,7,8}};
    int arr[2][3] = {1,2,3,4,5,6,7};
    printf("%p  %p\n",ptr[0],ptr[1]);
    printf("%d\n",a);
}
#endif
#if 0
int mul(int a, int b, int c)
{
    return a * b * c;
}
void main()
{
    int (*function_pointer)(int, int, int);
    function_pointer = mul;
    printf("The product of three numbers is:%d",
            function_pointer(2, 3, 4));
}
#endif
#if 0
void f(int);
void (*foo)(int) = f;
int main(int argc, char *argv[])
{
    foo(10);
    return 0;
}
void f(int i)
{
    printf("%d\n", i);
}
#endif
#if 0

void f(int (*x)(int));
int myfoo(int i);
int (*foo)(int) = myfoo;
int main()
{
    foo(10);
    f(myfoo);
}
void f(int (*i)(int))
{
    printf("%p\n",i);
    printf("%p\n",++i);
 //   i(11);
}
int myfoo(int i)
{
    printf("%d\n", i);
    return i;
}

#endif
#if 0
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
int F12;
int main()
{
    double x;
    printf("%d", my_sizeof(x));
    getchar();
    printf("%d\n",F12);
    return 0;
}
int F12 = 5765;
#endif
#if 0
int main(void)
{

    char *ptr[] = {"aaaaaa","bbbbb","ccccc","ddddddddd"};
    char **ptr1[] = {ptr,ptr+1,ptr+2,ptr+3};
    char ***ptr2 = ptr1;
    printf("%s %s  %s  %s\n",**--ptr2,**ptr2++,**ptr2++,**ptr2++);
    printf("size = %d\n",sizeof(ptr));
    printf("size = %d\n",sizeof(*ptr));
    printf("size = %d\n",sizeof(**ptr));
    printf("size = %d\n",sizeof(ptr1));
    printf("size = %d\n",sizeof(*ptr1));
    printf("size = %d\n",sizeof(**ptr1));
    printf("size = %d\n",sizeof(***ptr1));
    printf("size = %d\n",sizeof(ptr2));
    printf("%s\n",**(ptr1+3));

}
#endif
#if 0
int main(void)
{
    int ptr = 256;
    int (*f)(int , int) = NULL;
    printf("%p\n",f);
    printf("%p\n",++f);
    printf("%d\n",*(char *)&ptr);
}
#endif
#if 0
struct p
{
    int x;
    char y;
};
int main()
{
    struct p p1[] = {1, 92, 3, 94, 5, 96};
    struct p *ptr1 = p1;
    printf("size = %d\n",sizeof(p1));

    /*    int x = (sizeof(p1) / 3);
    if (x == sizeof(int) + sizeof(char))
        printf("%d\n", ptr1->x);
    else
        printf("falsen");*/

}
#endif
#if 0
union p
{
    int x;
    int y;
};
int main()
{
    union p p1[] = {1, 92, 3, 94, 5, 96};
    union  p *ptr1 = p1;
    int x = (sizeof(p1) / 5);
    printf("size = %d\n",sizeof(p1));
    if (x == 4)
        printf("%d %d\n", ptr1->x, (ptr1 + x - 2)->y);
    else
        printf("false\n");
}
#endif
#if 0
struct p
{
    int x;
    int y;
};
int main()
{
    struct p p1[] = {1, 92, 3, 94, 5, 96};
    struct p *ptr1[] = p1;
    int x = (sizeof(p1) / 5);
    if (x == 4)
        printf("%d %d\n", ptr1->x, (ptr1 + x - 2)->y);
    else
        printf("false\n");
}
#endif
#if 0
struct p
{
    int x;
    int y;
};
int main(void)
{

    struct p p1[] = {1, 92, 3, 94, 5, 96};
    struct p *ptr1 = p1;
    struct tag *p2[] = {ptr1,ptr1+2,ptr1+3};
    int x = (sizeof(p1) / 5);
  /*  if (x == 3)
        printf("%d %d\n", ptr1->x, (ptr1 + x - 1)->x);
    else
        printf("false\n"); */
    printf("%d\n",(*p2)->x);

}
#endif
#if 0
int fun(int (*ptr)[3])
{
    printf("%d\n",*(*ptr));
}
int main(void)
{
    //    int p1[3] = {1,2,3};
    //  int (*p)[3] = &p1;
    int a = 7867;
    //    int *p = &a;
}
#endif
#if 0
int main()
{
    int i;
    for (i = 0;i < 5; i++);
        int a = i;
    printf("%d\n", a);
}
#endif
#if 0
void main()
{
    static int x = 0;
    printf("in main");
    if (x < 2)
    {
        x++;
        main();
    }
}
#endif
#if 0
void main()
{
    char ch = 87;
    switch (ch)
    {
        case ch*1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
    }
}
#endif
#if 0
int main(void)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int ***ptr = NULL;
    ptr = malloc(sizeof(int *));
    *ptr = malloc( sizeof (int **));
    **ptr = malloc( sizeof (int **));
    int *val;
    **ptr = malloc(3*3*3*sizeof(int));

    val = ptr[0][0];
    for( i = 0,j = 0; i<3 && j<3;i++,j++){
        printf("in loop:\n");       
        ptr[i][j] = ptr[0][0] + i*3*3;
    
    }

    for(i = 0;i<2;i++){
        for(j = 0;j<2;j++){
            for(k = 0;k<2;k++){
                scanf("%d",&ptr[i][j][k]);
            }

        }
    }
    for(i = 0;i<2;i++){
        for(j = 0;j<2;j++){
            for(k = 0;k<2;k++){
                printf("%p == %d",&ptr[i][j][k],ptr[i][j][k]);
            }

        }
    }
}
#endif
#if 0
int main(void)
{
    int arr[][3] = {1,2,3,4,5,6,7};
    int **ptr = arr;
    printf("%d\n",*++ptr);




}
#endif
#if 0
int fun(int a, int *b)
{
    a = a*a;
    *b  = *b * *b;
}
int main(void)
{
    int i = -5;
    int j = -2;
    fun(i,&j);
    printf("%d  %d\n",i,j);
}

#endif
#if 0
int main(void)
{
    char arr[] = "ananuuuuadkuaaamar";
    int i = 0;
    int j = 0;
    for(i = 0;arr[i];i++){
        for(j = i+1;arr[j];j++){
            if(arr[i] == arr[j]){
                memmove(arr+j,arr+j+1,strlen(arr+j+1)+1);
                j--;
            }
        }
    }
    printf("%s\n",arr);
}
#endif
#if 0
int main()
{
     printf("%.3f\n", 2.89);
    char str[] = "hello";
    char str1[5];
    strcpy(str, str1);
    printf("%s", str1);
}
#endif
#if 0
#include  <stdio.h>
int main()
{
    char c;
    int i = 0;
    FILE *file;
//    file = fopen("test.txt", "w+");
//    fprintf(file, "%c", 'a');
//    fprintf(file, "%c", -1);
//    fprintf(file, "%c", 'b');
//    fclose(file);
    file = fopen("test.txt", "r");
    while ((c = fgetc(file)) !=  -1)
        printf("%c", c);
    return 0;
}
#endif
#if 0
int main()
{
    char *str = "x";
    char c = 'c';
    char ary[2];
//    ary[0] = c;
    printf("%d %d\n", strlen(str), strlen(ary));
    return 0;
}
#endif
#if 0
int main(void)
{
    char *ptr = NULL;
    char *q = 0;
    strcpy(&ptr,"anand");
    strcpy(&q,"kumar");
    printf("%s\n",&ptr);

}
#endif
#if 0
struct p
{
    int x;
    char y;
};
typedef struct p* q;
void foo(struct p* );
int main()
{
    struct p p1[] = {1, 92, 3, 94, 5, 96};
    foo(p1);
}
void foo(struct p* p1)
{
    void *ptr = p1;

    printf("size = %d\n",sizeof p1);
    q ptr1 = p1;
    ptr1++;
    printf("%d\n", ((struct p*)ptr)->x);

}
#endif
#if 0
struct temp
{
    int a;
} s;
void change(void *);
int main(void)
{
    s.a = 10;
    change(&s);
    printf("%d\n", s.a);

}
void change(void *p)
{

    (((struct temp *)p) -> a) =1873;

}
#endif
#if 0
struct student
{
    char *c;
    struct student *point;
};
void main()
{
    struct student s;
    struct student m;
    s.c = m.c = "hi";
    m.point = &s;
    (m.point)->c = "hey";
    printf("%s\t%s\t", s.c, m.c);
}
#endif
#if 0
struct student
{
    char *c;
    struct student *point;
};
void main()
{
    struct student *s = malloc(sizeof (struct student ));
    struct student *m = malloc(sizeof (struct student ));
    m->point = s;
    m->point->c = "hey";
    printf("%s\n", s->c);

}
#endif
#if 0
union student
{
    char *c;
    union student *point;
};
void main()
{
    union student s;
    s.c = malloc(1);
    
    strcpy(s.c + 1 , "hello\0sl;fkfkjfkld");
    
    printf("%s\n", ((char *)s.point)+1);
}
#endif
#if 0
union p
{
    unsigned int x;
    char y;
    union  p *ptr;
};
int main()
{

    union p p = {&p,2,3};
    printf("%p\n",&p);
    printf("%p\n", p.ptr->x);
    return 0;

}
#endif
#if 0
int main(void)
{

    int *ptr;
    printf("%dn",*ptr);

}
#endif
#if 0
typedef union p*q;
union p
{
    int x;
    int  y;
    q ptr;
};
//typedef struct p *q;
int main()
{
   
    q  p = {&p, 2, &p};
    printf("%d\n", p->y);
    return 0;
}
#endif
#if 0
void * fun(void *ptr)
{
    int a = 100;
    a = a+100;
    printf("a = %d\n",a++);


}
int main(void)
{
    pthread_t tid;
    int status;
    while(1){
        status = pthread_create(&tid,NULL,fun,NULL);
        getchar();
    }

}
#endif
#if 0
union tag{
    int a;
    int b;
    int c;
}val = {.a = 1,.b = 2,.c = 3};
int main(void)
{
    printf("a = %d\n",val.a);

}
#endif
#if 0
/*struct tag{
    
    int a;

}val = {.a = 876};*/

int fun (int ((*(val[3])))(int ,int))
{

    printf("%d\n",******val[0]);

}
int main(void )
{

    int arr[][3] = {178,2,3,4,5,6,7};
    
    printf("arr = %p\n",arr);
    
    fun(arr);

}
#endif
#if 0
int fun(void)
{

    printf("hello world:\n");

}
int main(void)
{

    FILE *fp;
    fp = fopen("txt","w+");
    fputs("anandkumar",fp);
    fputs("anandkumar",fp);
    puts("anandkumar");    

}
#endif
#if 0
void main(void)
{
    float f;
    int *ptr = 87687;
    printf("%p\n",ptr);
}
#endif
#if 0
struct tag{
    int *arr[20];
    int keycount[20];
}tag;

int main(void)
{
    char arr1[] = "anand kumar global edge software kumar india anand";
    char *tok;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int count = 0;
    int val = 0;
    tok = strtok(arr1," ");
    while(tok){
        tag.arr[i++] = tok;
        tok = strtok(NULL," ");
        printf("asjkdhaskjdh:\n");
    }
    for(j = 0;j<i;j++){
        for(k = j;k<i;k++){
            if(strcmp((char *)tag.arr[j],(char *)tag.arr[k]) == 0){
                    count++;
                    memmove(tag.arr+j,tag.arr+j+1,strlen(tag.arr+j+1)+1);
                    val++;
               }
        }
        tag.keycount[l++] = count;
        count = 0;
    }
    for(j = 0;j < i - val; j++){
        printf("count = %d\n",tag.keycount[j]);
    }



}
#endif
#if 0
int main()
{
    int (*ptr)(int,int);
    printf("ptr = %p\n",**ptr);
    printf("ptr+1 = %p\n",ptr+1);

}
#endif
#if 0
int search(int *arr,int key,int n)
{
    int mid ;
    int l = 0;
    int h = 7;
    n = n/2;
    while(n){
        mid = (l+h)/2;
        if(arr[mid] == key){
            printf("present key = %d\n",mid);
            return mid;
            break;
        }
        if(arr[mid] < key){
            l = mid+1;
            n--;
        }
        if(arr[mid] > key){
            h = mid-1;
            n--;
        }
    }



}
int main(void) 
{
    //  int a[] = {1,2,0,1,2,1,0,1,2,2,0,1,2};
    int a[] = {1,2,8,4,3,6,5,8};
   int i = 0;
   int j = 0;
   int min = 0;
   int n = 8;
/*   for(i= 0; i < 8-1;i++){
       for( j = 0;j<8-i-1;j++){
           if(a[j] > a[j+1]){
               a[j] = a[j] ^ a[j+1];
               a[j+1] = a[j] ^ a[j+1];
               a[j] = a[j] ^ a[j+1];
           }
       }
   }*/
   for(i = 0;i<n;i++){
       min = i;
       for(j = i+1 ; j < n-1 ; j++){
           if(a[min] >  a[j]){
               min = j;

           }
           if(min != i){
               a[min] = a[min] ^ a[i];
               a[i] = a[min] ^ a[i];
               a[min] = a[min] ^ a[i];
           }
       }
   }

   for(i = 0 ; i < n ;i++){
       printf("%d ",a[i]);
   }



  // printf("element present = %d\n",search(a,8,8));
/*   printf("val = %d\n",a[12]);
   putchar('\n');
   int temp = 0;
   j = 12;
   for(i = 0; i < 13 && i < j; i++){
       if(a[i] == 1){
           a[i] = a[i]^a[j];
           a[j] = a[i]^a[j];
           a[i] = a[i]^a[j];
           j--;
        }
   }

   for(i = 0; i<13;i++){
       printf("%d ",a[i]);
}*/
}
#endif
#if 0
int main(void)
{
    const char   firstname[] = "bobby";
    const char*  lastname = "eraserhead";
    printf("%lu\n", sizeof(firstname) + sizeof(lastname));
    return 0;
}
#endif
#if 0
int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,7,8};



}
#endif
#if 0
int fun(int (*a)[3])
{
    printf("size = %d\n",sizeof(*a));
    printf("%d\n",*(*a+2));

}
int main(void)
{
    int arr[][3] = {1,2,3,4,5,6,7,8};
    fun(arr);
}
#endif
#if 0
struct tag{
    int a;
    int b;
}val;
struct tag val2;
int main()
{
    val.a = 765;
    val.b = 7623;
    val2 = val;
    printf("%d\n",val2.b);
    return 0;
}
#endif
#if 0
int main(void)
{
    char arr[][15] = {"aaaaAAA","bgggbbbbbb","cccccccc","ddddddd"};
    char **ptr = arr;
    char (*ptr1)[15] = arr;
    char *ptr2[] = {++ptr,ptr1,++ptr1,ptr+1};
    printf("%s\n",(*ptr1+1));
    printf("size = %d\n",sizeof(arr));
}
#endif
#if 0
int main(void)
{
    FILE *fp;
    fp = fopen("txt","r");
    char buf[100];
    int count = 0;
    int i = 0;
    while(fgets(buf,100,fp) != NULL){
        count = 0;
        for(i = 0; i < 100 ;i++) {
            if(buf[i] != '\0')
                count++;
        }
        if(count > 82)
            printf("%s\n",buf);
        bzero(buf,100);
    }

}
#endif
#if 0
int i = 9867;
int add(int a, int b)
{
    printf("in add function:\n");
    int c = a+b;
    return c;
}
int main(void)
{
//    int i = 30;
    int a =908;
    a = add(10,30);
    i = 76;
    printf("a = %d\n",a);

}
#endif
#if 0
int main(void)
{
    int arr[] = {2,8,5,1,7,4,3};
    int temp = arr[0];
    int i = 0;
    for(i = 0;i<7;i++){
        if(temp < arr[i]){
            temp = arr[i];
        }
    }
    printf("temp = %d\n",temp);


}
#endif
#if 0
#pragma pack(4)
union tag{
    int a:8;
    int b : 3;
    int c : 4;
    short d:9;
    char e:8;
}val;
int main(void)
{
    printf("size = %d\n",sizeof(val));



}
#endif
#if 0
int main(void)
{
    int *ptr = NULL;
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int *ptr3 = NULL;
    ptr = malloc(10);
    printf("%u\n",(unsigned int )ptr);
   // printf("%d\n",*(ptr+3));
    ptr1 = malloc(10);
    printf("%u\n",(unsigned int )ptr1);
   // printf("%d\n",*(ptr1+3));
    
    ptr2 = malloc(10);
    printf("%u\n",(unsigned int )ptr2);
   // printf("%d\n",*(ptr2+3));

    ptr3 = malloc(10);
    printf("%u\n",(unsigned int )ptr3);
   // printf("%d\n",*(ptr3+3));
   free(ptr3);
   free(ptr2);
   free(ptr1);
   free(ptr);
   printf("*********************************\n");
   printf("after = %u\n",*(ptr3));
   printf("after = %u\n",*(ptr2));
   printf("after = %u\n",*(ptr1));
   printf("after = %u\n",*(ptr));
   printf("**********************************\n");
   ptr = malloc(10);
   printf("%u\n",(unsigned int )ptr);
   ptr1 = malloc(10);
   printf("%u\n",(unsigned int )ptr1);
   ptr2 = malloc(10);
   printf("%u\n",(unsigned int )ptr2);
   ptr3 = malloc(10);
   printf("%u\n",(unsigned int )ptr3);


}
#endif
#if 0
#pragma pack(2)
struct tag{
    short int a;
    int b;
    double g;
    int arr[10];
}val;
int main(void)
{
    val.arr[0] = 897;
    
    printf("size = %d\n",sizeof(val));


}
#endif
#if 0
#define size_of(x) (char *)((typeof(x) *)0+1)
int main(void)
{
  
  int *ptr = malloc(10);
    *(ptr-1)  =  ;
    free(ptr);
//    printf("size of int = %d\n",size_of(char));

}
#endif
#if 0
enum tag{aa,bb,cc,dd}instance;
typedef int (*ptr)(int ,int);
int main(void)
{
    ptr val,val1;
    char arr[] = "hello";
//    printf("%c\n",*arr++);
//    printf("%c\n",++(*arr));
}
#endif
