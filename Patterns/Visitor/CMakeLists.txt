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
include_directories(./Visitors)
include_directories(./Tiers)

add_executable(Visitor      
        Tiers/Tier.h
        Tiers/Tiers.h
        Tiers/Bronze.h
        Tiers/Bronze.cpp
        Tiers/Silver.h
        Tiers/Silver.cpp
        Tiers/Gold.h
        Tiers/Gold.cpp                
        Visitors/CashbackVisitor.cpp
        Visitors/CashbackVisitor.h
        Visitors/RewardVisitor.cpp
        Visitors/RewardVisitor.h
        Operation.cpp
        Operation.h
        Pay.cpp
        Pay.h
        Earn.cpp
        Earn.h        
        main.cpp)