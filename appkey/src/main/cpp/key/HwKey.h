//
// Created by wind on 2022/3/18.
//

#ifndef JNIAPPLICATION_HWKEY_H
#define JNIAPPLICATION_HWKEY_H


#include "Key.h"

class HwKey : public Key{
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;

};




#endif //JNIAPPLICATION_HWKEY_H
