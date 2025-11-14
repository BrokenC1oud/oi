#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 1; i < n; i++) {
    if (i % 2) {
      std::cout << "I hate that ";
    } else {
      std::cout << "I love that ";
    }
  }
  if (n % 2) {
    std::cout << "I hate it" << std::endl;
  } else {
    std::cout << "I love it" << std::endl;
  }

  return 0;
}
