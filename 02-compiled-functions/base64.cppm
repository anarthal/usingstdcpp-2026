// File: base64.cppm

export module base64;
import std;

namespace chat {
export std::string base64_encode(std::span<const std::byte> value);
}
