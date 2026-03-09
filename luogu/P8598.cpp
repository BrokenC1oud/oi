#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> ids;
    int temp;

    while (std::cin >> temp)
    {
        ids.push_back(temp);
    }
    std::ranges::sort(ids);

    int missing = -1;
    int duplicate = -1;

    for (size_t i = 1; i < ids.size(); i++)
    {
        if (ids[i] == ids[i - 1])
        {
            duplicate = ids[i];
        } else if (ids[i] == ids[i - 1] + 2)
        {
            missing = ids[i] - 1;
        }
    }

    std::cout << missing << " " << duplicate << std::endl;
}
