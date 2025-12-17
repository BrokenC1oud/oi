#include <iostream>

int main() {
  int k, r;
  std::cin >> k >> r;
  for (int i = 1; i < 10; i++) {
    if (i * k % 10 == r || i * k % 10 == 0) {
      std::cout << i << std::endl;
      break;
    }
  }
  return 0;
}
