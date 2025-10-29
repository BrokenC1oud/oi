#include <iostream>

int main() {
  int n, h;
  std::cin >> n >> h;

  int t;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> t;
    if (t > h) {
      ans += 2;
    } else {
      ans++;
    }
  }

  std::cout << ans << std::endl;

  return 0;
}
