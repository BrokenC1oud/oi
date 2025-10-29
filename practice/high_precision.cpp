#include <iostream>
#include <print>
#include <string>
#include <vector>

int main() {
    std::string large_s1, large_s2;
    std::vector<int> large1, large2;

    std::getline(std::cin, large_s1);
    std::getline(std::cin, large_s2);

    for (const char& c : large_s1) large1.push_back(c - '0');
    for (const char& c : large_s2) large2.push_back(c - '0');

    return 0;
}