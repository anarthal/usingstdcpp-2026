
add_library(05_server
    server.cpp)
target_sources(05_server PUBLIC FILE_SET CXX_MODULES FILES
    server.cppm redis_client.cppm)
set_target_properties(05_server PROPERTIES CXX_MODULE_STD ON)
target_compile_features(05_server PUBLIC cxx_std_23)
