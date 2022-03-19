//
// Created by wind on 2022/3/19.
//

#include "KeyFactory.h"

#include "WeChatKey.h"
#include "XiaoMiKey.h"
#include "HwKey.h"
#include "AliyunKey.h"
#include "OppoKey.h"
#include "VivoKey.h"
#include "ShanYanKey.h"
#include "JpushKey.h"
#include "UmengKey.h"
Key * KeyFactory::create(string key) {
    Key* k= nullptr;
    if (key.compare("wechat")==0){
        k=new WeChatKey;
    } else if (key.compare("hw")==0){
        k=new HwKey;
    }else if (key.compare("xiaomi")==0){
        k=new XiaoMiKey;
    }else if (key.compare("aliyun")==0){
        k=new AliyunKey;
    }else if (key.compare("oppo")==0){
        k=new OppoKey;
    }else if (key.compare("vivo")==0){
        k=new VivoKey;
    }else if (key.compare("shanyan")==0){
        k=new ShanYanKey;
    }else if (key.compare("jpush")==0){
        k=new JpushKey;
    }else if (key.compare("umeng")==0){
        k=new UmengKey;
    }
    return k;
}