#include <iostream>

int main()
{
    int ans = 0;
    for (int i = 1; i <= 2025; i++)
    {
        if (const int res = i * i * i; res % 10 == 3)
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;

    return 0;
}