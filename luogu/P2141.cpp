#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int nums[100] = {0};
    bool presence[20001] = {false};
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
        presence[nums[i]] = true;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (presence[nums[i] + nums[j]]) {
                ans ++;
                presence[nums[i] + nums[j]] = false;
            }
        }
    }

    std::cout << ans << std::endl;

    return 0;
}