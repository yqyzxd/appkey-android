//
// Created by wind on 2022/3/18.
//

#ifndef JNIAPPLICATION_KEY_H
#define JNIAPPLICATION_KEY_H

#include <string>
using namespace std;

class Key {
public:
    virtual string appId()=0;
    virtual string appKey()=0;
    virtual string appSecret()=0;

};


#endif //JNIAPPLICATION_KEY_H
