#include <functional>

int main()
{

    std::function<int(int)> dfs = [&](int idx)
    {
        return 0;
    };

    return 0;
}
