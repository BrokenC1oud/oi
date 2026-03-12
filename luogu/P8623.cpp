#include <iostream>

int main()
{
    int w, m, n;
    std::cin >> w >> m >> n;

    int m_x, m_y, n_x, n_y;
    m_x = (m - 1) / w % 2 ? w - (m - 1) % w : (m - 1) % w + 1;
    m_y = (m - 1) / w;
    n_x = (n - 1) / w % 2 ? w - (n - 1) % w : (n - 1) % w + 1;
    n_y = (n - 1) / w;
    std::cout << std::abs(m_x - n_x) + std::abs(m_y - n_y) << std::endl;

    return 0;
}