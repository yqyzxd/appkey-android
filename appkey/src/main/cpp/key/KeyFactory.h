//
// Created by wind on 2022/3/19.
//

#ifndef JNIAPPLICATION_KEYFACTORY_H
#define JNIAPPLICATION_KEYFACTORY_H
#include "Key.h"

class KeyFactory {
public:
    Key* create(string key);
};


#endif //JNIAPPLICATION_KEYFACTORY_H
