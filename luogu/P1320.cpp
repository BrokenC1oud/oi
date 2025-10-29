#include <cmath>
#include <iostream>

int main() {
  char data[400000];
  int n = 0;

  char c;
  while (std::cin >> c) {
    data[n] = c;
    n++;
  }

  std::cout << (int)sqrt(n) << ' ';
  int count = 1;
  for (int i = 1; i < n * n; i++) {
    if (data[i] == data[i - 1])
      count++;
    else {
      std::cout << count << ' ';
      count = 1;
    }
  }

  return 0;
}
