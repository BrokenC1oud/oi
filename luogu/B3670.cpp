#include <iostream>

int main() {
  int n, R;
  std::cin >> n >> R;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int k, p;
    std::cin >> k >> p;
    if (p <= R) {
      ans = ans > k ? ans : k;
    }
  }
  std::cout << ans << std::endl;
  return 0;
}
