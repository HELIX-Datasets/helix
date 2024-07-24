cmake_minimum_required(VERSION 2.6)

project(linux-system-shutdown)

include_directories(SYSTEM )

add_executable(linux-system-shutdown main.cpp)
target_link_libraries(linux-system-shutdown )
