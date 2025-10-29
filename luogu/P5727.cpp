#include <iostream>

int main() {
    int n;
    int nums[1000];
    std::cin >> n;

    int i;
    for (i = 0; n != 1; i++) {
        nums[i] = n;
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }

    std::cout << "1 ";

    for (i--; i >= 0; i--) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}