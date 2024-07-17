cmake_minimum_required(VERSION 2.6)

project(linux-create-hidden-dir)

include_directories(SYSTEM )

add_executable(linux-create-hidden-dir main.cpp)
target_link_libraries(linux-create-hidden-dir )
