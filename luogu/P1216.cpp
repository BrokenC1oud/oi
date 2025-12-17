#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> current(n), last(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      std::cin >> current[j];
      int left = j == 0 ? 0 : last[j - 1];
      int right = last[j];
      current[j] += left > right ? left : right;
    }
    last = current;
  }
  int ans = 0;
  for (int t : current) {
    ans = ans > t ? ans : t;
  }
  std::cout << ans << std::endl;
  return 0;
}
