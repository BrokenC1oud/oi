#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int sums[80] = {0};
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                sums[i + j + k + 3] ++;
            }
        }
    }

    int max = 0;
    int ans;
    for (int i = 79; i >= 0; i--) {
        if (sums[i] >= max) {
            max = sums[i];
            ans = i;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
