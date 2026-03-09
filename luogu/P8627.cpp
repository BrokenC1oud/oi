#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int result = n;
    int caps = n;
    while (caps >= 3)
    {
        result += caps / 3;
        caps = caps % 3 + caps / 3;
    }
    std::cout << result;

    return 0;
}