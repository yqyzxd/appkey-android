package com.github.yqyzxd.appkey


object Keys {
    @JvmStatic
    public var KEY_WECHAT="wechat"
    @JvmStatic
    public var KEY_HW="hw"
    @JvmStatic
    public var KEY_XIAOMI="xiaomi"

    private var mHandle:Long=0
    init {
        System.loadLibrary("appkey")
        mHandle=native_init()

        register(KEY_WECHAT)
        register(KEY_HW)
        register(KEY_XIAOMI)
    }

    fun register(key:String):Boolean{
        return native_register(mHandle,key)
    }
    fun unregister(key:String):Boolean{
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