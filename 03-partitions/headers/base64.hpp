// File: base64.hpp
#include <string>
#include <cstddef>
#include <span>

namespace chat {
std::string base64_encode(std::span<const std::byte> value);
}
