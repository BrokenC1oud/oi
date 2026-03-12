#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int width = 1189, height = 841;
    std::string in;
    std::cin >> in;

    for (int i = 0; i < in[1] - '0'; i++)
    {
        width /= 2;
        if (height > width) std::swap(width, height);
    }

    std::cout << std::max(width, height) << std::endl << std::min(width, height) << std::endl;

    return 0;
}