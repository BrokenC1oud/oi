#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int counts[101] = {0};
  int max = 0;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    for (int j = 1; j <= t; j++) {
      counts[j]++;
    }
    max = max > t ? max : t;
  }
  for (int i = n; i >= 1; i--) {
    int count = 0;
    for (int j = 1; j <= max; j++) {
      if (counts[j] >= i)
        count++;
    }
    std::cout << count << ' ';
  }
  std::cout << std::endl;
  return 0;
}
