cmake_minimum_required(VERSION 3.16)
project(megaphone)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98 -stdlib=libc++")
add_executable(cpp_piscine
        cpp_module_00/ex00/megaphone.cpp cpp_module_00/ex00/kek.h)