#include <iostream>
#include <queue>
#include <map>

int flip(int state, int x, int y)
{
    const int dx[] = {0, 0, 0, 1, -1};
    const int dy[] = {0, 1, -1, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3)
        {
            state ^= (1 << (nx * 3 + ny));
        }
    }
    return state;
}

int main()
{
    int start = 0, temp;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> temp;
        if (temp == 1) start |= (1 << i);
    }

    int target = (1 << 9) - 1;
    if (start == target)
    {
        std::cout << 0 << std::endl;
        return 0;
    }

    std::queue<std::pair<int, int>> q;
    std::map<int, bool> visited;

    q.emplace(start, 0);
    visited[start] = true;

    while (!q.empty())
    {
        int curr = q.front().first;
        int steps = q.front().second;
        q.pop();

        for (int i = 0; i < 9; i++)
        {
            int next_state = flip(curr, i / 3, i % 3);
            if (next_state == target)
            {
                std::cout << steps + 1 << std::endl;
                return 0;
            }
            if (!visited[next_state])
            {
                visited[next_state] = true;
                q.emplace(next_state, steps + 1);
            }
        }
    }

    return 0;
}
