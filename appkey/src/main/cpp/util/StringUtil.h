//
// Created by wind on 2022/3/19.
//
#include "../../../../../../../Library/Android/sdk/ndk/21.4.7075529/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/jni.h"
#include "../../../../../../../Library/Android/sdk/ndk/21.4.7075529/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/c++/v1/string"
using namespace std;


std::string chars2cppstring(const char* chs)
{
    std::string s(chs);
    return s;
}

std::string jstring2cppstring(JNIEnv* env,const jstring& jstr){
    return chars2cppstring(env->GetStringUTFChars(jstr,0));
}

jstring charstojstring(JNIEnv* env, const char* chs)
{
    return env->NewStringUTF(chs);
}

jstring cppstring2jstring(JNIEnv* env, const std::string& str)
{
    return charstojstring(env, str.c_str());
}


