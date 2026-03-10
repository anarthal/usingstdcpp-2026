
add_library(01_base64)
target_sources(01_base64 PUBLIC FILE_SET CXX_MODULES FILES
    base64.cppm)
set_target_properties(01_base64 PROPERTIES CXX_MODULE_STD ON)
target_compile_features(01_base64 PUBLIC cxx_std_23)

add_executable(01_main main.cpp)
target_link_libraries(01_main PRIVATE 01_base64)
