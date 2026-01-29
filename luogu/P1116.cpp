#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> carriages(n);
    for (auto& ship : carriages) std::cin >> ship;

    int total_inversions = 0;

    for (size_t i = 0; i < carriages.size(); ++i) {
        for (size_t j = i + 1; j < carriages.size(); ++j) {
            if (carriages[i] > carriages[j]) {
                total_inversions++;
            }
        }
    }

    std::cout << total_inversions << std::endl;

    return 0;
}