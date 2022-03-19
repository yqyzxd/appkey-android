//
// Created by wind on 2022/3/19.
//

#include "KeyFactory.h"

#include "WeChatKey.h"
#include "XiaoMiKey.h"
#include "HwKey.h"

Key * KeyFactory::create(string key) {
    Key* k= nullptr;
    if (key.compare("wechat")==0){
        k=new WeChatKey;
    } else if (key.compare("hw")==0){
        k=new HwKey;
    }else if (key.compare("xiaomi")==0){
        k=new XiaoMiKey;
    }
    return k;
}