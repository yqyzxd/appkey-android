package com.github.yqyzxd.appkey


object Keys {
    @JvmStatic
    var KEY_WECHAT="wechat"
    @JvmStatic
    var KEY_HW="hw"
    @JvmStatic
    var KEY_XIAOMI="xiaomi"
    @JvmStatic
    var KEY_OPPO="oppo"
    @JvmStatic
    var KEY_ALIYUN="aliyun"
    @JvmStatic
    var KEY_VIVO="vivo"
    @JvmStatic
    var KEY_SHANYAN="shanyan"
    @JvmStatic
    var KEY_JPUSH="jpush"
    @JvmStatic
    var KEY_UMENG="umeng"

    private var mHandle:Long=0
    init {
        System.loadLibrary("appkey")
        mHandle=native_init()

        register(KEY_WECHAT)
        register(KEY_HW)
        register(KEY_XIAOMI)
        register(KEY_OPPO)
        register(KEY_ALIYUN)
        register(KEY_VIVO)
        register(KEY_SHANYAN)
        register(KEY_JPUSH)
        register(KEY_UMENG)
    }

    private fun register(key:String):Boolean{
        return native_register(mHandle,key)
    }
    private fun unregister(key:String):Boolean{
        return native_unregister(mHandle,key)
    }

    fun getAppId(key:String):String{
        return native_get_appid(mHandle,key)
    }

    fun getAppKey(key:String):String{
        return native_get_appkey(mHandle,key)
    }

    fun getAppSecret(key:String):String{
        return native_get_appsecret(mHandle,key)
    }

    private external fun native_init():Long
    private external fun native_register(handle:Long,key:String):Boolean
    private external fun native_unregister(handle:Long,key:String):Boolean
    private external fun native_get_appid(handle:Long,key:String):String
    private external fun native_get_appkey(handle:Long,key:String):String
    private external fun native_get_appsecret(handle:Long,key:String):String

}