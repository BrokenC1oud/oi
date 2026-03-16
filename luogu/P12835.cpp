#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int cnt = 0;

    for (int i = 10; i <= 1e12; i++)
    {
        int t = i;
        int last = t % 10;
        t /= 10;

        bool valid = true;
        do
        {
            if (t % 10 % 2 == last % 2)
            {
                valid = false;
                break;
            }
            last = t % 10;
            t /= 10;
        } while (t);

        if (valid == true) cnt++;
        if (cnt == n) {std::cout << i << std::endl; break;}
    }

    return 0;
}