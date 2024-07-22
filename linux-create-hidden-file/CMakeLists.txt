cmake_minimum_required(VERSION 2.6)

project(linux-create-hidden-file)

include_directories(SYSTEM )

add_executable(linux-create-hidden-file main.cpp)
target_link_libraries(linux-create-hidden-file )
