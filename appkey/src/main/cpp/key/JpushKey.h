//
// Created by wind on 2022/3/19.
//

#ifndef APPKEY_ANDROID_JPUSHKEY_H
#define APPKEY_ANDROID_JPUSHKEY_H
#include "key.h"

class JpushKey : public Key{
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;
};


#endif //APPKEY_ANDROID_JPUSHKEY_H
