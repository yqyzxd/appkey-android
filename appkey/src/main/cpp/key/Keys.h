//
// Created by wind on 2022/3/18.
//

#ifndef JNIAPPLICATION_KEYS_H
#define JNIAPPLICATION_KEYS_H

#include "Key.h"
#include <string>
#include <map>

class Keys {
private:
    std::map<string, Key*> ks;
public:
    Keys();
    ~Keys();

public:
    bool registerKey(string key, Key* value);

    bool unregisterKey(string key);

    Key* which(string key);

};

#endif //JNIAPPLICATION_KEYS_H
