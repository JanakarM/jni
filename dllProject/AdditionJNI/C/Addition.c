#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "addition.h"   // Generated
 
// Implementation of the native method sayHello()
JNIEXPORT jint JNICALL Java_Addition_add(JNIEnv *env, jobject jObj, jint a, jint b){
	return a+b;
}
