cmake_minimum_required(VERSION 3.1.0)

if(LINUX)
    set(CMAKE_C_COMPILER "/usr/bin/clang")
    set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
endif()

if(WIN)
    # Command to run: set(CMAKE_C_COMPILER "C:/msys64/clang64/bin/clang.exe")
    set(CMAKE_C_COMPILER "C:/msys64/clang64/bin/clang.exe")
    set(CMAKE_CXX_COMPILER "C:/msys64/clang64/bin/clang++.exe")
endif()

project(Broker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE "Debug")

include_directories(.)

add_executable(ChatRoom
        Observable.h
        Observable.cpp
        Observer.h
        Observer.cpp
        ChatRoom.h
        ChatRoom.cpp
        Message.h
        main.cpp)