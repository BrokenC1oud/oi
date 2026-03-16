#include <iostream>

bool isInterested(int x)
{
    int t;
    while (x)
    {
        t = x % 10;
        if (t == 0 || t == 2 || t == 1 || t == 9)
        {
            return true;
        }
        x = x / 10;
    }
    return false;
}

int main()
{
    int sum = 0;
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isInterested(i))
        {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}