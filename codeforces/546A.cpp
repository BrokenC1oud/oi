#include <iostream>

int main() {
  int k, n, w;
  std::cin >> k >> n >> w;

  int tot = 0;
  for (int i = 1; i <= w; i++) {
    tot += k * i;
  }
  int needed = tot > n ? tot - n : 0;
  std::cout << needed << std::endl;

  return 0;
}
