cmake_minimum_required(VERSION 3.5)
project("LinuxPlayground"  LANGUAGES CXX)

#cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..

#Chapter 01 -> Gtest and Gmock
add_subdirectory(chapter_01)
add_subdirectory(chapter_02)
add_subdirectory(chapter_03)
