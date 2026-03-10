// File: server.cpp
#include "server.hpp"
#include "base64.hpp"
#include <iostream>

void chat::serve_forever(unsigned short port)
{
    std::byte arr [10] {};
    std::cout << chat::base64_encode(arr) << port << '\n';
}
