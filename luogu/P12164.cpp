#include <iostream>

int main()
{
    int h, w;
    std::cin >> h >> w;

    std::string t = "2025";

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            std::cout << t[(i + j) % 4];
        }
        std::cout << std::endl;
    }

    return 0;
}