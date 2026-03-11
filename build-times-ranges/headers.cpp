
#include <algorithm>
#include <print>
#include <ranges>
#include <vector>

namespace views = std::views;
namespace ranges = std::ranges;

int main()
{
    std::vector<int> nums = {7, 8, 9, 10, 1, 2, 3, 4, 5, 6};

    auto even_squares = nums
        | views::filter([](int n) { return n % 2 == 0; })
        | views::transform([](int n) { return n * n; })
        | ranges::to<std::vector<int>>();

    ranges::sort(even_squares, std::greater{});
    std::println("Elements: {}", even_squares);
}
