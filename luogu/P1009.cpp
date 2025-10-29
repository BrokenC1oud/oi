#include <iostream>

int main() {
    int a[1000] = {};
    int b[1000] = {};
    int carrier = 0;

    int n;
    std::cin >> n;

    a[999] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 1000; j++) {
            a[1000 - j] *= i;
            a[1000 - j] += carrier;
            carrier = a[1000 - j] / 10;
            a[1000 - j] = a[1000 - j] % 10;
        }

        for (int j = 1; j <= 1000; j ++) {
            b[1000 - j] += a[1000 - j];
            b[1000 - j] += carrier;
            carrier = b[1000 - j] / 10;
            b[1000 - j] = b[1000 - j] % 10;
        }
    }

    bool leading = true;
    for (const int i : b) {
        if (i == 0 && leading) continue;
        leading = false;
        printf("%d", i);
    }

    return 0;
}