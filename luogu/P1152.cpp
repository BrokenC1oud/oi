#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    if (n == 1) {
        int temp;
        std::cin >> temp;
        std::cout << "Jolly" << std::endl;
        return 0;
    }

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<bool> found(n, false);
    int count = 0;

    for (int i = 1; i < n; i++) {
        int diff = std::abs(a[i] - a[i - 1]);

        if (diff >= 1 && diff <= n - 1 && !found[diff]) {
            found[diff] = true;
            count++;
        }
    }

    if (count == n - 1) {
        std::cout << "Jolly" << std::endl;
    } else {
        std::cout << "Not jolly" << std::endl;
    }

    return 0;
}