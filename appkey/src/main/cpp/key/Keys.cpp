//
// Created by wind on 2022/3/18.
//

#include "Keys.h"

Keys::Keys() {

}

Keys::~Keys() {
    ks.clear();
}
bool Keys::registerKey(string key, Key* value) {
    pair<map<string,Key*>::iterator,bool>  insert_pair= ks.insert(pair<string,Key*>(key,value));
    return insert_pair.second;
}

bool Keys::unregisterKey(string key) {
    int n=ks.erase(key);//删除成功返回1，否则未为0
    return n==1;
}
Key* Keys::which(string key) {
    auto iter = ks.find(key);
    Key* value= nullptr;
    if (iter!=ks.end()){
        value=iter->second;
    }
    return value;
}