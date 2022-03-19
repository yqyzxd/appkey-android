# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.18.1)

# Declares and names the project.

project("appkey")


add_library( # Sets the name of the library.
        appkey
        # Sets the library as a shared library.
        SHARED
        # Provides a relative path to your source file(s).
        key/WeChatKey.cpp
        key/XiaoMiKey.cpp
        key/HwKey.cpp
        key/OppoKey.cpp
        key/VivoKey.cpp
        key/ShanYanKey.cpp
        key/AliyunKey.cpp
        key/JpushKey.cpp
        key/UmengKey.cpp
        key/Keys.cpp
        key/KeyFactory.cpp
        com_github_yqyzxd_appkey_Keys.cpp
        util/StringUtil.h
        )

find_library(
        log-lib
        log)


target_link_libraries( # Specifies the target library.
        appkey

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})