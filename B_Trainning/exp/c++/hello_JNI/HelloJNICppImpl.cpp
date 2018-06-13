#include "HelloJNICpp.h"
#include  <iostream>
 
using namespace std;
  
JNIEXPORT void JNICALL Java_HelloJNICpp_sayHello
    (JNIEnv *env, jobject obj)
{
    cout << "Hello World from C++!" << endl;
            return;
}
