#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n == 1) std::cout << 1 << std::endl;
    else if (n <= 10) std::cout << 10 << std::endl;
    else if (n <= 100) std::cout << 100 << std::endl;
    else if (n <= 1000) std::cout << 1000 << std::endl;
    else if (n <= 10000) std::cout << 10000 << std::endl;
    else if (n <= 100000) std::cout << 100000 << std::endl;
    else if (n <= 1000000) std::cout << 1000000 << std::endl;
    else if (n <= 10000000) std::cout << 10000000 << std::endl;
    else if (n <= 100000000) std::cout << 100000000 << std::endl;
    else if (n <= 1000000000) std::cout << 1000000000 << std::endl;


    return 0;
}