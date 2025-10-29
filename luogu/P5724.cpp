#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> a;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t;
        a.push_back(t);
    }

    std::sort(a.begin(), a.end());

    std::cout << a.back() - a[0];

    return 0;
}
