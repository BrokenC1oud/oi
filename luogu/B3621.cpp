#include <functional>
#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> tuple;
    std::function<void()> dfs = [&]
    {
        if (tuple.size() == n)
        {
            for (int item: tuple)
            {
                std::cout << item << ' ';
            }
            std::cout << std::endl;
            return;
        }
        for (int i = 1; i <= k; i++)
        {
            tuple.push_back(i);
            dfs();
            tuple.pop_back();
        }
    };

    dfs();

    return 0;
}