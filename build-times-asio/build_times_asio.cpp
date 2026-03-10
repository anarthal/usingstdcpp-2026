#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/address_v4.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/system/error_code.hpp>

#include <iostream>

namespace asio = boost::asio;
using asio::ip::tcp;

int main()
{
    asio::io_context ctx;
    tcp::socket sock(ctx);
    sock.async_connect(
        tcp::endpoint(asio::ip::address_v4::loopback(), 6379),
        [](boost::system::error_code ec) { std::cout << "Connect: " << ec << std::endl; }
    );
    ctx.run();
}
