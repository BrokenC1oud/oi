#include <iostream>

int main() {
    int length;
    int ans;

    std::cin >> length;

    for (; length > 1; length /= 2) ans ++;

    std::cout << ans;

    return 0;
}
