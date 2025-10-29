#include <iostream>

int main() {
    int days;
    int t = 1;
    int ans = 0;

    std::cin >> days;

    while (days != 0) {
        for (int i = 0; i < t; i++) {
            days --;
            ans += t;

            if (days == 0) break;
        }
        t++;
    }

    std::cout << ans;

    return 0;
}