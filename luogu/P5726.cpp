#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> scores;

    int t;
    for (int i = 0; i < n; i ++) {
        std::cin >> t;
        scores.push_back(t);
    }

    std::sort(scores.begin(), scores.end());
    scores.pop_back();
    scores.erase(scores.begin());

    int sum = 0;
    for (int score : scores) sum += score;

    printf("%.2f", (double) sum / scores.size());

    return 0;
}