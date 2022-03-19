//
// Created by wind on 2022/3/19.
//

#ifndef APPKEY_ANDROID_OPPOKEY_H
#define APPKEY_ANDROID_OPPOKEY_H

#include "key.h"
class OppoKey : public Key{
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;
};


#endif //APPKEY_ANDROID_OPPOKEY_H
