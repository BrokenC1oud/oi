#include <iostream>

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int t = 1;
    int cnt = 0;

    while (t++)
    {
        if (isPrime(t))
        {
            cnt++;
        }

        if (cnt == 2025)
        {
            std::cout << t << std::endl;
            return 0;
        }
    }

    return 0;
}