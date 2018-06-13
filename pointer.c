
#include<stdio.h>
#if 0
int main(void)
{
    int *p=NULL;
    printf("value of p %u\n",p);
    //output will be zero
}
#endif

#if 0
int main(void)
{
    int a = 10;
    int *ptr = NULL;
    ptr = &a;
    *ptr = 30;

    printf("Address of a is %p\n",&a);
    printf("Value of ptr is %p\n",ptr);
    printf("Value is %d\n",*ptr);
    printf("Value is %d\n",a);
    return 0;
}
#endif



#if 0
int main(void)
{
    int a = 10045;
    int *ptr = NULL;
    char *p = &a;

    printf("Value is %d\n",*p);
    printf("Value is %d\n",*(p+1));
    printf("Value is %d\n",*(p+2));
    return 0;
    // it will print 61, that is one byte of binary convertion of 10045 in little     //  endian format
}
#endif


#if 0
int main(void)
{
    char a = 'b';
    int *ptr = &a;
    char *p = &a;
    printf("Value is %d\n",*ptr);
    printf("Value is %d\n",*p);
    printf("Address of a is %p\n",&a);
    printf("content of ptr  %p\n",ptr);
    printf("content of p  %p\n",p);
    return 0;
    // it will print 61, that is one byte of binary convertion of 10045 in little       endian format
}
#endif

#if 0
int main(void)
{
    int a = 10045;
    int *ptr = NULL;
    char *p = &a;

    printf("Value is %d\n",*p);
    printf("Value is %d\n",*(p+1));
    printf("Value is %d\n",*(p+2));
    return 0;
    // it will print 61, that is one byte of binary convertion of 10045 in little     //  endian format
}
#endif

#if 0
int main(void)
{
    int *ptr=NULL;

    int a = 10;
    char c = 'a';
   short int s = 100;
   double d = 20.00;
    char *p;
    p = &c;
    ptr = &a;
    printf("Address of a is %p\n",&a);
   printf("Address of c is %p\n",&c);
    printf("Address of d is %p\n",&d);
    printf("Address of s is %p\n",&s);
    printf("value of a : %d\n",*ptr);
    printf("value of a : %d\n",*ptr);
    printf("Address of ptr  is %p\n",(ptr));
    
    printf("Address of ((((ptr+1)))  is %p\n",(ptr+1));
    printf("Address of ptr + 1 is %d\n",*(ptr+1));

    printf("Address of ptr+2 is %d\n",*(ptr + 2));
/*
    printf("Address of ptr+4 is %d\n",*(ptr + 4));
    printf("Address of ptr+10 is %d\n",*(ptr + 10));
    printf("Address of ptr+5 is %d\n",*(ptr + 5));
*/


   // printf("Address of ((((ptr)))))  is %p\n",(ptr));
    //printf("Address of ((((ptr+1)))  is %p\n",(ptr+1));
}

#endif

#if 0
int main(void)
{
    int *ptr;
    int arr[5]= {1,2,3,4,5};
    printf("Array[0] val is %d\n",arr[1000]);
}
#endif


#if 0
int main(void)
{
    int *ptr;
    int (*p)[5];
    int arr[5]= {1,2,3,4,5};
    printf("Array[0] val is %d\n",arr[400]);
}
#endif

#if 0
int main(void)
{
    int arr[5]= {1,2,3,4,5};
    int *ptr = arr;
    int (*p)[3] = &arr;
    
    printf("Address of a is %p\n",arr);
    printf("Address of ptr is %p\n",ptr);
    printf("Address of p is %p\n",p);
    printf("value of ptr is %d\n",*ptr);
    printf("value of p is %p\n",*p);
 //   printf("value of p is %d\n",*p);
    printf("Address of ptr + 1 is %p\n",ptr + 1);
    printf("value of ptr+1 is %d\n",*(ptr + 1));
    printf("Address of p+1 is %p\n",p + 1);
    printf("value of p+1 is %d\n",*(*(p + 1)));
   //*/
    printf("value of arr[0] is %d\n",*(*p+0));
    printf("value of arr[1] is %d\n",*(*p+1));
    printf("value of arr[2] is %d\n",*(*p+2));
    printf("value of arr[3] is %d\n",*(*p+3));
    printf("value of arr[4] is %d\n",*(*p+4));
    printf("value of arr[5] is %d\n",*(*p+5));
    printf("value of arr[0] is %d\n",**p+5);
    printf("value of arr[6] is %d\n",*(*p+6));//till this value it will give some junk values ,then  it give seg  faults
//    printf("value of arr[2] is %d\n",**p);

    
}
#endif

#if 1                                                                          
int main(void)                                                                  
{                                                                               
    int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *ptr = ( int *)&arr;                                                             
 // int (*p)[3] = &arr;
    printf("Address of a is %p\n",arr);                                       
    printf("Address of a+1 is %p\n",arr+1);                                       
    printf("Address of *arr is %p\n",*arr);                                       
    printf("Address of *arr+1 is %p\n",*arr+1);                                       
    printf("Value  of *(*arr + i) is %d\n",*(*arr + 12));
    printf("value of ptr is %p\n",(ptr));  
    printf("value of ptr+1 is %p\n",(ptr+1));  
    printf("value of ptr is %d\n",*(ptr));  
    printf("value of ptr is %d\n",*(ptr+5));  

}
#endif

#if 0                                                                          
int main(void)                                                                  
{                                                                               
    int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *ptr = ( int *)&arr;                                                             
    int (*p)[4] = arr;
    printf("Address of p is %p\n",p);                                       
    printf("Address of p+1 is %p\n",p+1);                                       
    printf("Address of *p is %p\n",*p);                                       
    printf("Address of *p+1 is %p\n",*p+1);                                       
    printf("Value  of *(*p + i) is %d\n",*(*p + 5));
    printf("value of **(p+1) is %p\n",*(p+1));  
    printf("value of ptr+1 is %d\n",**(p+1));  
//    printf("value of ptr is %d\n",*(ptr));  
//    printf("value of ptr is %d\n",*(ptr+5));  

}
#endif

#if 0                                                                          
int main(void)                                                                  
{                                                                               
    int arr[2][3][2]= {{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
    printf("Address of arr is %p\n",arr);                                       
    printf("Address of arr+1 is %p\n",arr+1);                                       
    printf("Address of arr+2 is %p\n",arr+2);                                       
    printf("Address of arr+3 is %p\n",arr+3);  

    printf("Address of *(arr + i) is %p\n",*(arr + 0));
    printf("Address of *(arr + i) is %p\n",*(arr + 1));
    printf("Address of *(arr + i)+1 is %p\n",*(arr + 0)+1);
    printf("Address of *(arr + i)+2  is %d\n",*(*(*(arr + 0)+2)+0));
    printf("Address of *(arr + i)+2  is %d\n",*(*((*(arr + 0)+1)+1)));
    printf("YESSS\n");
    printf("Address of *(arr + i)+1+1 is %p\n",*(*(arr + 0)+1));
    printf("Address of *(arr + i)+1 is %p\n",*(arr + 0)+0);
    printf("Address of *(arr + i)+1+1 is %p\n",(*(*(arr + 0)+1))+1);
    printf("Address of *(arr + i)+1 is %p\n",(*(arr + 0)+1)+1);
    

    printf("Address of *(arr + i) is %p\n",*(*(arr + 0)));
    printf("Address of *(arr + i) is %p\n",*(*(arr + 1)));
    printf("value of *(arr + i) is %d\n",*(*(*(arr + 0))));
    printf("value of *(arr + i) is %d\n",*(*(*(arr + 0)+1)+9));
    printf("value of *(arr + i) is %d\n",*(*(*(arr + 1))));
//    printf("Address of *p+1 is %p\n",*p+1);                                       
//    printf("Value  of *(*p + i) is %d\n",*(*p + 5));
//    printf("value of **(p+1) is %p\n",*(p+1));  
//    printf("value of ptr+1 is %d\n",**(p+1));  
//    printf("value of ptr is %d\n",*(ptr));  
//    printf("value of ptr is %d\n",*(ptr+5));  

}
#endif
#if 0
int fun(int b[5])
{
    printf("Address of b is %p\n:",b);
    printf("Size of b %ld\n",sizeof(b));
    b[3] = 10;

}
int main(void)
{
    int a[5]={1,2,3,4,5};
    int b= 10;
    int *p = &b;

    printf("Size of ptr %ld\n",sizeof(p));
    printf("Address of p is %p\n:",p);
    printf("Address of p+1 is %p\n:",p+1);
    printf("Address of a is %p\n:",a);
    printf("Address size is %ld\n,",sizeof(&b));   
    fun(a);
    printf("%d\n",a[3]);
    return 0;
}

#endif

#if 0
int fun(int (*c)[3])
{
//    printf("Address of b is %p\n:",b);
    printf("Size of b %ld\n",sizeof(*c));
    printf("Address of c is %p\n",c);
    printf("Size of c[0][0] %d\n",*(*(c+0)+0));
    printf("Size of c[0][1] %d\n",*(*(c+0)+1));
    printf("Size of c[0][2] %d\n",*(*(c+0)+2));
    printf("Address of c+1 is %p\n",c+1);
//    printf("Size of c[0][3] %d\n",*(*(c+0)+3));
    printf("Size of c[1][0] %d\n",*(*(c+1)+0));
    printf("Size of c[1][1] %d\n",*(*(c+1)+1));
    printf("Size of c[1][2] %d\n",*(*(c+1)+2));
    printf("Address of c+2 is %p\n",c+2);
    printf("Size of c[2][0] %d\n",*(*(c+2)+0));
    printf("Size of c[2][1] %d\n",*(*(c+2)+1));
    printf("Size of c[2][2] %d\n",*(*(c+2)+2));
    printf("Size of c[3][0] %d\n",*(*(c+3)+0));
    printf("Size of c[3][1] %d\n",*(*(c+3)+1));
    printf("Size of c[3][2] %d\n",*(*(c+3)+2));
    printf("Size of c[4][0] %d\n",*(*(c+4)+0));
    printf("Size of c[4][1] %d\n",*(*(c+4)+1));
    printf("Size of c[4][2] %d\n",*(*(c+4)+2));

}
int main(void)
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b= 10;
    int *p = &b;

//    printf("Size of ptr %ld\n",sizeof(p));
//    printf("Address of p is %p\n:",p);
//    printf("Address of p+1 is %p\n:",p+1);
//    printf("Address of a is %p\n:",a);
//    printf("Address size is %ld\n,",sizeof(&b));   
    fun(a);
    return 0;

}
#endif

#if 0
int main(void)
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p[3];
    int i,j;

//    int b= 10;
//    int *p = &b;
    for(i = 0; i<3; i++){
        p[i]= a[i];    
    }
    printf("Address  is %p\n,",p[0]);   
    printf("Address  is %p\n,",p[1]);   
    printf("Address  is %p\n,",p[2]);   

    for(i = 0; i<3 ; i++){
        for(j = 0; j<3; j++){
            printf("Value of a[%d][%d] :%d\n ",i,j,p[i][j]);
        }
    }
}
#endif
