#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
  int s, n;
  std::cin >> s >> n;
  std::vector<std::pair<int, int>> v(n);
  for (auto &p : v) {
    std::cin >> p.first >> p.second;
  }
  std::sort(v.begin(), v.end());
  for (auto p : v) {
    if (s <= p.first) {
      std::cout << "NO" << std::endl;
      return 0;
    } else {
      s += p.second;
    }
  }
  std::cout << "YES" << std::endl;
  return 0;
}
