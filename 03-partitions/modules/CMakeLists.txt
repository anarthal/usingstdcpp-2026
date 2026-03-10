
add_library(03_server
    base64.cpp server.cpp)
target_sources(03_server PUBLIC FILE_SET CXX_MODULES FILES
    base64.cppm server.cppm)
set_target_properties(03_server PROPERTIES CXX_MODULE_STD ON)
target_compile_features(03_server PUBLIC cxx_std_23)

add_executable(03_main main.cpp)
target_link_libraries(03_main PRIVATE 03_server)
