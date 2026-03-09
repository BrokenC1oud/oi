#include <iostream>

int main()
{
    int w, h, v;
    std::cin >> w >> h >> v;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            std::cout << "Q";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < v + w; j++)
        {
            std::cout << "Q";
        }
        std::cout << std::endl;
    }
    return 0;
}