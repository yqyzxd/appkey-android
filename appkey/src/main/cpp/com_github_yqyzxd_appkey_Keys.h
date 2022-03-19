//
// Created by wind on 2022/3/18.
//
#include <jni.h>

#ifndef JNIAPPLICATION_COM_GITHUB_YQYZXD_JNIAPPLICATION_KEYS_H
#define JNIAPPLICATION_COM_GITHUB_YQYZXD_JNIAPPLICATION_KEYS_H
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jlong JNICALL
Java_com_github_yqyzxd_jniapplication_Keys_native_1init(JNIEnv *evn, jobject thiz);

JNIEXPORT jboolean JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1register(JNIEnv *env, jobject thiz, jlong handle,
                                                            jstring key);


JNIEXPORT jboolean JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1unregister(JNIEnv *env, jobject thiz,
                                                              jlong handle, jstring key);


JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appid(JNIEnv *env, jobject thiz,
                                                              jlong handle, jstring key);

JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appkey(JNIEnv *env, jobject thiz,
                                                               jlong handle, jstring key);

JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appsecret(JNIEnv *env, jobject thiz,
                                                                  jlong handle, jstring key);


#ifdef __cplusplus
}
#endif
#endif //JNIAPPLICATION_COM_GITHUB_YQYZXD_JNIAPPLICATION_KEYS_H

