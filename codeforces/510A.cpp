#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < n; i++) {
    if (i % 2) {
      if (i / 2 % 2) {
        std::cout << '#';
        for (int j = 0; j < m - 1; j++)
          std::cout << '.';
      } else {
        for (int j = 0; j < m - 1; j++)
          std::cout << '.';
        std::cout << '#';
      }
    } else {
      for (int j = 0; j < m; j++) {
        std::cout << '#';
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
