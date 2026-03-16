#include <functional>
#include <iostream>
#include <vector>

int main() {
    // Optimize I/O operations
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    if (!(std::cin >> n >> k)) return 0;

    std::vector<int> path;
    std::vector<bool> used(n + 1, false);

    // Modern C++ recursive lambda (requires C++11 or higher)
    // Using auto& for the lambda itself allows it to call itself
    std::function<void(int)> dfs = [&](const int depth) -> void {
        // Base case: we have selected k students
        if (depth == k) {
            for (int i = 0; i < k; ++i) {
                std::cout << path[i] << (i == k - 1 ? "" : " ");
            }
            std::cout << "\n";
            return;
        }

        // Try every student from 1 to n to maintain lexicographical order
        for (int i = 1; i <= n; ++i) {
            if (!used[i]) {
                used[i] = true;
                path.push_back(i);

                dfs(depth + 1); // Move to the next position

                // Backtrack: restore state for the next iteration
                path.pop_back();
                used[i] = false;
            }
        }
    };

    dfs(0);

    return 0;
}