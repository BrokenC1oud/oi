#include <cstddef>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> v(n);
  for (auto &i : v)
    std::cin >> i;
  int p[2] = {0};
  for (int i : v) {
    p[i % 2]++;
  }
  for (size_t i = 1; i <= v.size(); i++) {
    if (p[v[i - 1] % 2] == 1) {
      std::cout << i << std::endl;
      break;
    }
  }
  return 0;
}
