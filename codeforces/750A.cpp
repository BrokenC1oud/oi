#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  int minutes = 240 - k;
  int tests = 0;
  while (minutes >= 0) {
    minutes -= (tests + 1) * 5;
    tests++;
  }
  std::cout << (((tests - 1) < n) ? (tests - 1) : n) << std::endl;
  return 0;
}
