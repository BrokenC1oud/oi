#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> jigsaws(m);
  for (auto &i : jigsaws)
    std::cin >> i;
  std::sort(jigsaws.begin(), jigsaws.end());
  int ans = 100000;
  for (int i = 0; i < m - n + 1; i++) {
    ans = ans < jigsaws[i + n - 1] - jigsaws[i]
              ? ans
              : jigsaws[i + n - 1] - jigsaws[i];
  }
  std::cout << ans << std::endl;
  return 0;
}
