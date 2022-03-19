//
// Created by wind on 2022/3/18.
//

#include "com_github_yqyzxd_appkey_Keys.h"

#include "key/Keys.h"
#include "key/KeyFactory.h"

#include "util/StringUtil.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1init(JNIEnv *env, jobject thiz) {
    Keys* keys=new Keys;
    return reinterpret_cast<jlong>(keys);
}

JNIEXPORT jboolean JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1register(JNIEnv *env, jobject thiz,jlong handle,
                                                            jstring jkey){
    Keys* keys= reinterpret_cast<Keys *>(handle);
    KeyFactory* factory=new KeyFactory;
    string cppkey=jstring2cppstring(env,jkey);
    Key* key=factory->create(cppkey);
    delete factory;
    if (key!= nullptr){
        return keys->registerKey(cppkey,key);
    }
    return false;

}


JNIEXPORT jboolean JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1unregister(JNIEnv *env, jobject thiz,jlong handle,
                                                              jstring key){
    Keys* keys= reinterpret_cast<Keys *>(handle);
    return keys->unregisterKey(jstring2cppstring(env,key));
}


JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appid(JNIEnv *env, jobject thiz,
                                                              jlong handle,
                                                              jstring jkey){
    Keys* keys= reinterpret_cast<Keys *>(handle);
    Key* key=keys->which(jstring2cppstring(env,jkey));
    if (key== nullptr){
        //todo 需要考虑未注册的情况
    }
    return cppstring2jstring(env,key->appId());
}

JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appkey(JNIEnv *env, jobject thiz,
                                                               jlong handle,
                                                               jstring jkey){
    Keys* keys= reinterpret_cast<Keys *>(handle);
    Key* key=keys->which(jstring2cppstring(env,jkey));
    return cppstring2jstring(env,key->appKey());
}

JNIEXPORT jstring JNICALL
Java_com_github_yqyzxd_appkey_Keys_native_1get_1appsecret(JNIEnv *env, jobject thiz,
                                                                  jlong handle,
                                                                  jstring jkey){
    Keys* keys= reinterpret_cast<Keys *>(handle);
    Key* key=keys->which(jstring2cppstring(env,jkey));
    return cppstring2jstring(env,key->appSecret());
}

#ifdef __cplusplus
}
#endif