#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int last = -1, current;
    int t = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> current;
        if (current - last == 1) {
            t += 1;
            if (t > ans) ans = t;
        } else {
            t = 0;
        }
        last = current;
    }

    std::cout << ans;

    return 0;
}