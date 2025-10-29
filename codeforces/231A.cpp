#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a, b, c;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> a >> b >> c;
    if (a + b + c > 1)
      ans++;
  }

  std::cout << ans << std::endl;

  return 0;
}
