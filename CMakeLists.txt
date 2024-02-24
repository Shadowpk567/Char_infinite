cmake_minimum_required(VERSION 3.22)

project(CvsCpp)

add_library(string String.c)

add_executable(CString main.c)

target_link_libraries(CString string)
