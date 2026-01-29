#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) std::cin >> a[i];
        std::vector<int> b(n);
        for (int i = 0; i < n; ++i) std::cin >> b[i];

        std::sort(a.begin(), a.end());

        std::vector<long long> strikes_needed(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            strikes_needed[i + 1] = strikes_needed[i] + b[i];
        }

        long long max_score = 0;

        for (int k = 1; k <= n; ++k) {
            long long total_strikes_needed = strikes_needed[k];
            
            if (total_strikes_needed > n) break;

            int x_val = a[n - total_strikes_needed];
            long long current_score = (long long)x_val * k;
            if (current_score > max_score) {
                max_score = current_score;
            }
        }

        std::cout << max_score << std::endl;
    }
    return 0;
}