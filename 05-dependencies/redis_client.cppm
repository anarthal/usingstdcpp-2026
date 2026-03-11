
// File: redis_client.cppm
module;

#include <boost/asio/awaitable.hpp>

module server:redis_client;

namespace chat {

export class redis_client {
public:
    boost::asio::awaitable<std::int64_t> lookup_user(
        std::string_view cookie
    );
};

}
