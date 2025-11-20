#include <iostream>
#include <utility>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> v(n);
  for (auto &p : v) {
    std::cin >> p.first >> p.second;
  }
  int ans = 0;
  for (size_t i = 0; i < v.size(); i++) {
    for (size_t j = 0; j < v.size(); j++) {
      if (i == j) {
        continue;
      }
      if (v[i].first == v[j].second) {
        ans++;
      }
    }
  }
  std::cout << ans << std::endl;
  return 0;
}
