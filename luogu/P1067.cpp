#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool first = true;
  for (int i = 0; i <= n; i++) {
    int a;
    std::cin >> a;

    if (a == 0)
      continue;

    if (first) {
      if (a < 0) {
        std::cout << '-';
        a = -a;
      }
      first = false;
    } else {
      if (a > 0) {
        std::cout << '+';
      } else {
        std::cout << '-';
        a = -a;
      }
    }

    if (n - i == 0) {
      std::cout << a;
    } else {
      if (a != 1) {
        std::cout << a;
      }
    }

    if (n - i > 0) {
      std::cout << 'x';
      if (n - i > 1) {
        std::cout << '^' << n - i;
      }
    }
  }

  std::cout << std::endl;

  return 0;
}
