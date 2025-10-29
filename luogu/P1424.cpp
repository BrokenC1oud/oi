#include <iostream>

int main() {
    int x, n;
    long long ans = 0;

    std::cin >> x >> n;
    ans = n / 7 * 5 *250;
    n = n % 7;

    for (int i = 0; i < n; i++) {
        int current = x + i;
        if (current > 7) {
            current -= 7;
        }

        if (current >= 1 && current <= 5) {
            ans += 250;
        }
    }

    std::cout << ans;

    return 0;
}
