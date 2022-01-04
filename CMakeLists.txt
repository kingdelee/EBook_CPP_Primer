cmake_minimum_required(VERSION 3.19)
project(EBook_CPP_Primer)


set(PROBLEM_NAME "EBook_CPP_Primer")

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_CXX_STANDARD 17)

#add_definitions(-DTEST_DEBUG)


SET (CMAKE_C_COMPILER             "/usr/local/opt/llvm@8/bin/clang")
SET (CMAKE_C_FLAGS                "${CMAKE_C_FLAGS} -Wall -std=c99")
SET (CMAKE_C_FLAGS_DEBUG          "${CMAKE_C_FLAGS_DEBUG} -g -gdwarf-3")
SET (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_CXX_COMPILER             "/usr/local/opt/llvm@8/bin/clang++")
SET (CMAKE_CXX_FLAGS                "${CMAKE_CXX_FLAGS} -Wall -std=c++14")
SET (CMAKE_CXX_FLAGS_DEBUG          "${CMAKE_CXX_FLAGS_DEBUG} -g -gdwarf-3")
SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_AR      "/usr/bin/llvm-ar")
SET (CMAKE_LINKER  "/usr/bin/llvm-ld")
SET (CMAKE_NM      "/usr/bin/llvm-nm")
SET (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
SET (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")

#set CMAKE_BUILD_TYPE
set(CMAKE_BUILD_TYPE Debug)
#SET(CMAKE_BUILD_TYPE "Release")

# set output binary path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#指定生成库文件的目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#add_compile_options(-Wall -std=c++14 -O2)
# debug不要加优化
#add_compile_options(-Wall -std=c++14)

#收集c/c++文件并赋值给变量SRC_LIST_CPP  ${PROJECT_SOURCE_DIR}代表区当前项目录
#FILE(GLOB SRC_LIST_CPP ${PROJECT_SOURCE_DIR}/src/*.cpp)
#FILE(GLOB SRC_LIST_C ${PROJECT_SOURCE_DIR}/src/*.c)

FILE(GLOB SRC_LIST ${PROJECT_SOURCE_DIR}/src/*.cpp ${PROJECT_SOURCE_DIR}/src/*.cc)

#指定头文件目录
include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#指定链接库文件目录
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

# 指定源文件目录
AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src SRC_LIST)

#去变量SRC_LIST_CPP 与SRC_LIST_C 指定生成libmyprint 动态库   默认生成静态库  SHARED指定生成库类型为动态库
#ADD_LIBRARY(libt1  ${SRC_LIST})
#ADD_LIBRARY(libt1 SHARED ${SRC_LIST})

#add_executable(t1 s1/s1.cpp ${SRC_LIST})
#add_executable(t1 s1/s1.cpp ${SRC_LIST})
#add_executable(t1 s1/s2.cpp ${SRC_LIST})
#add_executable(t1 s1/s3.cpp ${SRC_LIST})
#add_executable(t1 main.cpp ${SRC_LIST})

#

#target_link_libraries(t1)

#add_executable(mytest 第二章/2章_1节-1_MyProject.cpp)
#add_executable(mytest 第二章/2章_1节-2_MyProject.cpp)
#add_executable(mytest 第六章/6章_3节-1_MyProject.cpp)
#add_executable(add 1/add.cpp)
#add_executable(add_item 1/add_item.cpp)
#add_executable(compounddecls 2/compounddecls.cpp)
#add_executable(dbl_ptr 2/dbl_ptr.cpp)
#add_executable(2.4_constexpr 2/2.4_constexpr.cpp)
#add_executable(1.1_string 1/1.1_string.cpp)
#add_executable(1.2_arr 1/1.2_arr.cpp)
add_executable(1.3_point 1/1.3_point.cpp)