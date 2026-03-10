// File: base64.cpp
module;

#include <cassert>

module server;
import :base64;
import std;

static std::string base64_encode_long(std::span<const std::byte> value)
{
    assert(!value.empty());
    // ...
    return {};
}

static std::string base64_encode_short(std::span<const std::byte> value)
{
    // ...
    return {};
}

std::string chat::base64_encode(std::span<const std::byte> value)
{
    return value.size() >= 64 ? base64_encode_long(value) : base64_encode_short(value);
}
