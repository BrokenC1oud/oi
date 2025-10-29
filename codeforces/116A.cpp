#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int a, b;
  int capacity = 0;
  int current = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> a >> b;
    current += b - a;
    if (current > capacity)
      capacity = current;
  }

  std::cout << capacity << std::endl;

  return 0;
}
