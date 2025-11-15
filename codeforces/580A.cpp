#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int last = 100000001;
  int t;
  int count = 0;
  int max = -1;
  while (n--) {
    std::cin >> t;
    if (t >= last) {
      count++;
    } else {
      count = 1;
    }
    max = max > count ? max : count;
    last = t;
  }
  std::cout << max << std::endl;
  return 0;
}
