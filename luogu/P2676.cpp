#include <iostream>
#include <vector>

int main() {
    int N, B;
    std::cin >> N >> B;

    std::vector<int> H(N);
    for (auto & h : H) std::cin >> h;

    std::sort(H.begin(), H.end(), [](auto a, auto b) -> bool { return a > b; });

    int acc = 0;
    const auto it = std::ranges::find_if(H, [&](auto i) -> bool { return (acc += i) >= B; });

    std::cout << (std::distance(H.begin(), it) + (it == H.end() ? 0 : 1)) << std::endl;

    return 0;
}
