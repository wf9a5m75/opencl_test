#include <jni.h>
#include "helloworld.h"

extern "C" {


  void helloworld(JNIEnv* env, jobject self);

  // http://kznote.blogspot.com/2013/01/androidnative.html
  //
  // B - byte
  // C - char
  // D - double
  // F - float
  // I - int
  // J - long
  // S - short
  // V - void
  // Z - boolean
  // l - jobject
  // L(java class name); - Java class name. i.e : Ljava/lang/String;
  // [(class name) - array of class name.  i.e.: byte str[]  -> [B
  static JNINativeMethod jniMethodTable[] = {
      {"native_helloworld", "()V", (void *) helloworld}
  };

  JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved);


}