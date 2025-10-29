#include <iostream>

int main() {
    int n;
    std::cin >> n;

    bool sign = false;

    if (n < 0) {
        sign = true;
        n = -n;
    }

    int ans = 0;
    while (n != 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }

    if (sign) ans = -ans;

    std::cout << ans;

    return 0;
}
