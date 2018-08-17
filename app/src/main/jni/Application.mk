NDK_TOOLCHAIN_VERSION := clang
#NDK_TOOLCHAIN_VERSION := 4.9
APP_CPPFLAGS := -frtti -fexceptions -std=c++11 -mfpu=neon -ftree-vectorize
APP_PLATFORM := android-18

APP_ABI := armeabi-v7a
TARGET_ARCH_ABI := $(APP_ABI)
#APP_ABI := armeabi-v7a-hard ## not good for green screen
#APP_STL := stlport_shared

ARCH_ARM_HAVE_NEON := true
APP_OPTIM := debug
APP_ALLOW_MISSING_DEPS := true
