//#include<jni.h>
#include<stdio.h>
#include"InstanceFieldAccess.h"

JNIEXPORT void JNICALL Java_InstanceFieldAccess_accessField(JNIEnv *env, jobject obj) 
{
    jfieldID fid;
    jstring jstr;
    const char *str1;

    jclass cls = (*env)->GetObjectClass(env, obj);
//    printf("In c - \n");
    
    fid = (*env)->GetFieldID(env, cls, "str", "Ljava/lang/String;");
    if(fid == NULL) {
        return;
     }  

    jstr = (*env)->GetObjectField(env, obj, fid);       
    str1 = (*env)->GetStringUTFChars(env, jstr, NULL);
    if(str1 == NULL) {
        return;
     }
    printf("In c - %s\n",str1);
    (*env)->ReleaseStringUTFChars(env, jstr, str1);


} 
