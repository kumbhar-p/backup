//#include<jni.h>
#include<stdio.h>
#include"HelloJNIC.h"

JNIEXPORT void JNICALL Java_HelloJNIC_sayHello(JNIEnv *env, jobject obj)
{
    printf("Hello World !!!!\n");
    return ;
}
