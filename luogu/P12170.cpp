#include <iostream>

int main()
{
    int hp = 2025;

    int result = 0;
    while (hp > 0)
    {
        result ++;
        hp -= 5;
        hp -= result % 2 ? 2 : 15;
        if (result % 3 == 0)
        {
            hp -= 7;
        } else if (result % 3 == 1)
        {
            hp -= 2;
        } else
        {
            hp -= 10;
        }
    }
    std::cout << result << std::endl;
    return 0;
}