// File: server.cpp
module;

#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>

module server;

import std;

namespace asio = boost::asio;

void chat::serve_forever(unsigned short port)
{
    asio::io_context ctx;
    asio::ip::tcp::acceptor acceptor (ctx);
    // ...
    ctx.run();
}
