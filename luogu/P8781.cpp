#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << std::max(n - i - 1, i) * 2 << std::endl;
    }

    return 0;
}