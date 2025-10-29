#include <iostream>

int main() {
    float s;
    std::cin >> s;
    float step = 2;
    int ans = 0;

    while (s > 0) {
        ans += 1;
        s -= step;
        step  = step * 98 / 100;
    }

    std::cout << ans << std::endl;

    return 0;
}
