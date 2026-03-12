#include <iostream>
#include <string>

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    int idx = 0;
    for (char c : s)
    {
        if (c == t[idx])
        {
            idx++;
        }
    }
    std::cout << idx << std::endl;

    return 0;
}