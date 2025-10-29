#include <cstdio>
#include <iostream>

int main() {
    int n;
    scanf("%d\n", &n);

    int package, price;
    long long ans = 1e18, t;

    for (int i = 0; i < 3; i++) {
        std::cin >> package >> price;
        t = (n + package - 1) / package;
        t *= price;
        if (t < ans) {
            ans = t;
        }
    }

    std::cout << ans;

    return 0;
}