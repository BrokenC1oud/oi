#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int result = 0;

    while (n)
    {
        int t = n, delta = 0;
        while (t)
        {
            delta += t % 10;
            t /= 10;
        }
        n -= delta;
        result++;
    }

    std::cout << result << std::endl;

    return 0;
}
