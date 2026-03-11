
find_package(Boost REQUIRED COMPONENTS headers)

add_library(disable_optional_dependencies INTERFACE)
target_compile_definitions(disable_optional_dependencies INTERFACE
    BOOST_ASIO_DISABLE_BOOST_ALIGN
    BOOST_ASIO_DISABLE_BOOST_ARRAY
    BOOST_ASIO_DISABLE_BOOST_CHRONO
    BOOST_ASIO_DISABLE_BOOST_COROUTINE
    BOOST_ASIO_DISABLE_BOOST_DATE_TIME
    BOOST_ASIO_DISABLE_BOOST_REGEX
)

add_executable(build_times_asio build_times_asio.cpp)
target_compile_features(build_times_asio PUBLIC cxx_std_23)
target_link_libraries(build_times_asio PRIVATE Boost::headers disable_optional_dependencies)
target_compile_options(build_times_asio PRIVATE -ftime-trace)

