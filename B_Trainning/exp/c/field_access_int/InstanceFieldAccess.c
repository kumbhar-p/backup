//#include<jni.h>
#include<stdio.h>
#include"InstanceFieldAccess.h"

JNIEXPORT void JNICALL Java_InstanceFieldAccess_accessField(JNIEnv *env, jobject obj) 
{
    jfieldID fid;
    jint si;

    jclass cls = (*env)->GetObjectClass(env, obj);
    printf("In c - \n");
    
    fid = (*env)->GetFieldID(env, cls, "str", "I");
    if(fid == NULL) {
        return;
     }  

    si = (*env)->GetIntField(obj, fid);       
    printf("In c - %d",si);


} 
