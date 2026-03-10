
find_package(Boost REQUIRED COMPONENTS headers)

add_executable(build_times_asio build_times_asio.cpp)
target_compile_features(build_times_asio PUBLIC cxx_std_23)
target_link_libraries(build_times_asio PRIVATE Boost::headers)
target_compile_options(build_times_asio PRIVATE -ftime-trace)
