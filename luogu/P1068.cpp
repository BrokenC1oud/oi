#include <algorithm>
#include <iostream>
#include <vector>

struct Candidate {
    int k;
    int s;
};

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<Candidate> candidates(n);
    for (auto &[k, s] : candidates) std::cin >> k >> s;
    std::ranges::sort(candidates, [](auto a, auto b) { return a.s > b.s; });

    return 0;
}
