#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> p(n);
        int pos = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> p[i];
        }

        if (n == 1) {
            std::cout << p[0] << "\n";
            continue;
        }

        int target = n;
        if (p[0] == n) target = n - 1;

        for (int i = 0; i < n; ++i) {
            if (p[i] == target) {
                pos = i;
                break;
            }
        }

        std::vector<int> best;
        int r = (pos == n - 1) ? n - 1 : pos;

        for (int l = 0; l <= r; ++l) {
            std::vector<int> current;
            current.reserve(n);

            for (int i = r; i < n; ++i) current.push_back(p[i]);

            if (r == pos && pos != n - 1) {
                for (int i = r - 1; i >= l; --i) current.push_back(p[i]);
                for (int i = 0; i < l; ++i) current.push_back(p[i]);
            } else {
                for (int i = r - 1; i >= l; --i) current.push_back(p[i]);
                for (int i = 0; i < l; ++i) current.push_back(p[i]);
            }

            if (best.empty() || current > best) {
                best = std::move(current);
            }
        }

        if (pos != n - 1) {
            std::vector<int> alt;
            alt.reserve(n);
            int alt_r = pos - 1;
            for (int i = pos; i < n; ++i) alt.push_back(p[i]);
            for (int l = 0; l <= alt_r; ++l) {
                std::vector<int> temp = alt;
                for (int i = alt_r; i >= l; --i) temp.push_back(p[i]);
                for (int i = 0; i < l; ++i) temp.push_back(p[i]);
                if (temp > best) best = std::move(temp);
            }
        }

        for (int i = 0; i < n; ++i) {
            std::cout << best[i] << (i == n - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}