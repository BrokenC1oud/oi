#include <iostream>

int main() {
  int a, b, c, d;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> a >> b >> c >> d;
    if (a == b && c == d && a == c) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
