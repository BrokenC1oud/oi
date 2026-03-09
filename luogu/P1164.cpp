#include <functional>
#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;
    std::vector<int> dishes(N);

    for (auto & dish : dishes) {
        std::cin >> dish;
    }

    std::vector<std::vector<int>> memo(M + 1, std::vector<int>(N + 1, -1));

    std::function<int(int, int)> dfs = [&](int i, int j){
        if (i == 0) return 1;
        if (i < 0 || j > N) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        return memo[i][j] = dfs(i - dishes[j], j + 1) + dfs(i, j + 1);
    };
    std::cout << dfs(M, 0) << std::endl;

    return 0;
}
