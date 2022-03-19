//
// Created by wind on 2022/3/19.
//

#ifndef APPKEY_ANDROID_UMENGKEY_H
#define APPKEY_ANDROID_UMENGKEY_H

#include "key.h"
class UmengKey : public Key{
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;
};


#endif //APPKEY_ANDROID_UMENGKEY_H
