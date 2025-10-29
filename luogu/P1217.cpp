#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            continue;
        }

        int j = i, k = 0;
        while (j != 0) {
            k = k * 10 + j % 10;
            j /= 10;
        }
        if (i != k) continue;

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
