#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        int n, q;
        std::cin >> n >> q;

        std::vector<long long> a(n);
        for (int i = 0; i < n; ++i) std::cin >> a[i];

        std::vector<long long> b(n);
        for (int i = 0; i < n; ++i) std::cin >> b[i];

        std::vector<long long> best(n);
        long long current_max = 0;
        for (int i = n - 1; i >= 0; --i) {
            current_max = std::max({current_max, a[i], b[i]});
            best[i] = current_max;
        }

        std::vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i] + best[i];
        }

        for (int i = 0; i < q; ++i) {
            int l, r;
            std::cin >> l >> r;
            std::cout << pref[r] - pref[l - 1] << (i == q - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}