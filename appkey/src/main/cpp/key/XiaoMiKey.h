//
// Created by wind on 2022/3/18.
//

#ifndef JNIAPPLICATION_XIAOMIKEY_H
#define JNIAPPLICATION_XIAOMIKEY_H

#include "Key.h"

class XiaoMiKey : public Key{
public:
    string appId() override;
    string appKey() override;
    string appSecret() override;
};


#endif //JNIAPPLICATION_XIAOMIKEY_H
