#include <iostream>

int factorial(int n) {
  if (n == 1)
    return n;
  return n * factorial(n - 1);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << factorial(n) << std::endl;
  return 0;
}
