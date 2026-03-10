// File: base64.cppm

module server:base64;
import std;

namespace chat {
std::string base64_encode(std::span<const std::byte> value);
}
