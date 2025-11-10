#include <cmath>
#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int max = 0, start = 0;
  for (int i = 2; i < std::sqrt(n) + 1; i++) {
    int t = n, j = i;
    while (t % j == 0) {
      t /= j;
      j++;
    }

    int len = j - i;
    if (len > max) {
      max = len;
      start = i;
    }
  }

  if (max == 0) {
    std::cout << 1 << std::endl;
    std::cout << n << std::endl;
  } else {
    std::cout << max << std::endl;
    for (int i = start; i < start + max; i++) {
      if (i != start)
        std::cout << "*";
      std::cout << i;
    }
    std::cout << std::endl;
  }

  return 0;
}
