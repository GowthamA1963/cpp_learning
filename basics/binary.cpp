#include <format>
#include <iostream>
#include <print>

int main()
{
    std::cout << std::format("{:b}\n", 0b1010);
    std::cout << std::format("{:#b}\n", 0b1010);
    std::println("{:b} {:#b}", 0b1010, 0b1010);  // must be println, not printf
    return 0;
}