#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int ans = 0;
  ans += n * (m / 2);
  ans += n / 2 * (m % 2);

  std::cout << ans << std::endl;

  return 0;
}
