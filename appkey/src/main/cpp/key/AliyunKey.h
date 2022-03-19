//
// Created by wind on 2022/3/19.
//

#ifndef APPKEY_ANDROID_ALIYUNKEY_H
#define APPKEY_ANDROID_ALIYUNKEY_H

#include "key.h"
class AliyunKey : public Key {
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;
};


#endif //APPKEY_ANDROID_ALIYUNKEY_H
