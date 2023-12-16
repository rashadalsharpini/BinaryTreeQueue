cmake_minimum_required(VERSION 3.27)
project(BinaryTreeQueue)

set(CMAKE_CXX_STANDARD 17)

add_executable(BinaryTreeQueue main.cpp
        Node.cpp
        Node.h
        Tree.cpp
        Tree.h
)
