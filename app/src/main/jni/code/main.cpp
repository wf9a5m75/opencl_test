#include "main.h"


// Register c++ functions to VM
JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {

  // Register export functions to JAVA
  JNIEnv *env;
  if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) != JNI_OK) {
    return JNI_ERR;
  } else {
    jclass clazz = env->FindClass("test/wf9a5m75/opencl/MainActivity");
    if (clazz) {
      int method_table_size = sizeof(jniMethodTable) / sizeof(jniMethodTable[0]);
      jint ret = env->RegisterNatives(clazz, jniMethodTable, method_table_size);
      env->DeleteLocalRef(clazz);
      return ret == 0 ? JNI_VERSION_1_6 : JNI_ERR;
    } else {
      return JNI_ERR;
    }
  }

  return JNI_VERSION_1_6;
}