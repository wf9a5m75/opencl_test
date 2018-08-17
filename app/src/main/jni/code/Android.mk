LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libhelloworld
LOCAL_SRC_FILES :=  main.cpp helloworld.c
LOCAL_STATIC_LIBRARIES += OpenCL
LOCAL_ARM_MODE := arm
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libopencl-stub/include
LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)
