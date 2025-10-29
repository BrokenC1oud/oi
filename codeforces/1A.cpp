#include <iostream>

int main() {
  int n, m, a;
  std::cin >> n >> m >> a;

  int x = (n + a - 1) / a;
  int y = (m + a - 1) / a;

  std::cout << (long long)x * y << std::endl;

  return 0;
}
