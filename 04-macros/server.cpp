module server;

import std;
import :base64;

void chat::serve_forever(unsigned short port)
{
    std::byte arr [10] {};
    std::cout << chat::base64_encode(arr) << port << '\n';
}
