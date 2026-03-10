
add_library(04_server
    base64.cpp server.cpp)
target_sources(04_server PUBLIC FILE_SET CXX_MODULES FILES
    base64.cppm server.cppm)
set_target_properties(04_server PROPERTIES CXX_MODULE_STD ON)
target_compile_features(04_server PUBLIC cxx_std_23)
