#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;
    std::vector<int> vertices = {a, b, c};

    std::sort(vertices.begin(), vertices.end());

    int i = std::gcd(vertices[0], vertices[2]);

    std::cout << vertices[0] / i << '/' << vertices[2] / i << std::endl;

    return 0;
}
