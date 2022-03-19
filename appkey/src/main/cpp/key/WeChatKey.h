//
// Created by wind on 2022/3/18.
//

#ifndef JNIAPPLICATION_WECHATKEY_H
#define JNIAPPLICATION_WECHATKEY_H


using namespace std;

#include <string>
#include "Key.h"

class WeChatKey : public Key{
public:
   string appId() override;
   string appKey() override;
   string appSecret() override;

};


#endif //JNIAPPLICATION_WECHATKEY_H
