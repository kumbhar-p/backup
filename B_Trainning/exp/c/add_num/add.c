#include<stdio.h>
#include"add.h"

JNIEXPORT jint JNICALL Java_add_add_1(JNIEnv *env, jobject obj, jint a, jint b)
{
    jint res;
    printf("numbers are %d and %d\n", a, b);
    res = a + b;
//    printf("%d",res);
    return res;
}
