
cmake_minimum_required(VERSION 3.28...4.3)
project(usingstdcpp_2026)

find_package(Boost REQUIRED)

add_subdirectory(00-import-std)
add_subdirectory(01-inline-functions)
add_subdirectory(02-compiled-functions)
add_subdirectory(03-partitions/headers)
add_subdirectory(03-partitions/modules)
add_subdirectory(04-macros)
add_subdirectory(05-dependencies)
add_subdirectory(build-times-ranges)
add_subdirectory(build-times-asio)