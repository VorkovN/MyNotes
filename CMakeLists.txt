cmake_minimum_required(VERSION 3.20)
project(MyNotes)

set(CMAKE_CXX_STANDARD 23)

find_package (GTest)
find_package (Threads)
find_package(Qt5Widgets REQUIRED)

add_subdirectory(application)