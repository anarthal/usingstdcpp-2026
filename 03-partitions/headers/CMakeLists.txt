
add_library(03_headers_server
    base64.cpp server.cpp)

add_executable(03_headers_main main.cpp)
target_link_libraries(03_headers_main PRIVATE 03_headers_server)
