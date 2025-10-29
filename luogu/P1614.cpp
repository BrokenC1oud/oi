#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int ans = 114514;
    int buffer[3000] = {0};
    for (int i = 0; i < n; i++) {
        std::cin >> buffer[i];
    }

    for (int i = m - 1; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += buffer[i - j];
        }
        ans = ans < sum ? ans : sum;
    }

    std::cout << ans << std::endl;

    return 0;
}
