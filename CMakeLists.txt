cmake_minimum_required(VERSION 3.0.0)
project(assignment)
##
#set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)
#
##-------------------
## Compiler flags
##-------------------
#include(CheckCXXCompilerFlag)
#CHECK_CXX_COMPILER_FLAG("-std=gnu++11" COMPILER_SUPPORTS_CXX11)
#if(COMPILER_SUPPORTS_CXX11)
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -g")
#endif()
#
## set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#include(CheckCCompilerFlag)
#CHECK_C_COMPILER_FLAG("-std=gnu11" COMPILER_SUPPORTS_C11)
#if(COMPILER_SUPPORTS_C11)
#    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu11 -g")
#endif()
## include(CTest)
## enable_testing()
#
add_executable(assignment assignment2/q1/generator.cpp assignment2/q1/verifier.cpp)
##target_link_libraries(algotesting ${CMAKE_THREAD_LIBS_INIT} -lbenchmark -lbenchmark_main -pthread rt)
#
#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)

#cmake_minimum_required (VERSION 3.0.0)
#project (Tutorial)
#add_executable(Tutorial assignment1/q1/q1.c)