#include <iostream>

int main() {
  int w1, w2;
  std::cin >> w1 >> w2;

  int ans = 0;
  while (w1 <= w2) {
    ans++;
    w1 *= 3;
    w2 *= 2;
  }

  std::cout << ans << std::endl;

  return 0;
}
