#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, s, x;
        std::cin >> n >> s >> x;
        std::vector<int> a(n);

        for (auto & i : a) std::cin >> i;
        int sum = std::accumulate(a.begin(), a.end(), 0);
        if ((s - sum) % x == 0 && s >= sum)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}