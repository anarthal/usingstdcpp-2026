
add_library(02_base64
    base64.cpp)
target_sources(02_base64 PUBLIC FILE_SET CXX_MODULES FILES
    base64.cppm)
set_target_properties(02_base64 PROPERTIES CXX_MODULE_STD ON)
target_compile_features(02_base64 PUBLIC cxx_std_23)

add_executable(02_main main.cpp)
target_link_libraries(02_main PRIVATE 02_base64)

add_library(02_base64_headers base64_headers.cpp)