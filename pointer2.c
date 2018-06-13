#include<stdio.h>
#if 0
int main(void){
    int a = 10;
    int b = 20;
//    const int *ptr = &a;
    const int *ptr;
    ptr = &a;
    ptr = &b;
 //   *ptr = &a;
 //   *ptr = 100;
 //   *ptr = &b;
    

}
#endif

#if 0
int main(void){
    int a = 10;
    int b = 20;
    int *const ptr= &a;
      *ptr = &b;
 //    ptr = 10000;

   *ptr = &b;
    
}
#endif

#if 0
int add(int a, int b){
    return a + b;
}
int main(void){
    int *ptr = NULL;
    ptr = &add;
    printf("Address of function 'add' is %ld\n",ptr);
    return 0;
}
#endif

//function pointer example
#if 1
int (*fp)(int,int);
int add(int a, int b){
    return a + b;
}
int main(void){
    int ptr;
    fp = add;
    ptr =fp(4,5);
   
    printf("Addition of two numbers  is : %d\n",ptr);
    return 0;
}
#endif
