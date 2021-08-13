cmake_minimum_required(VERSION 3.5)
set(APPNAME "chapter_02")

project(${APPNAME}  LANGUAGES CXX)

# Threads
find_package(Threads REQUIRED)
include_directories(${Threads_INCLUDE_DIRS})
link_directories(${Threads_LIBRARY_DIRS})

set (SOURCES
    src/main.cpp
)

set(HEADERS
)


add_executable(${APPNAME} ${HEADERS} ${SOURCES} )
#target_link_libraries(${APPNAME}  PRIVATE cpprestsdk_openssl_internal INTERFACE OpenSSL::SSL)
target_link_libraries(${APPNAME}  PRIVATE Threads::Threads)
