#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring
JNICALL
Java_com_example_brunorocha_ndkexample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello There!";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jboolean
JNICALL
Java_com_example_brunorocha_ndkexample_MainActivity_validatePrimeNumber(
        JNIEnv *env,
        jobject, /* this */
        jint value){
    bool isPrimeNumber = false;

    for(int i = 2; i <= value/2; ++i)
    {
        if(value%i == 0)
        {
            isPrimeNumber = true;
            break;
        }
    }
    //TODO:: call java method telling if the number is prime or not
    return isPrimeNumber;
}
