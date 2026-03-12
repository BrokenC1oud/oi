#include <functional>
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<bool> v;
    std::function<void()> dfs = [&] -> void
    {
        if (v.size() == n)
        {
            for (bool item : v)
            {
                if (item) std::cout << "N";
                else std::cout << "Y";
            }
            std::cout << std::endl;
            return;
        }
        v.push_back(true);
        dfs();
        v.pop_back();
        v.push_back(false);
        dfs();
        v.pop_back();
    };

    dfs();

    return 0;
}