#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    std::cin >> n;
    std::vector<int> toys;
    int odds = 0, evens = 0;
    for (int j = 0; j < n; j++) {
      int k;
      std::cin >> k;
      if (k % 2 == 0) {
        odds++;
      } else {
        evens++;
      }
      toys.push_back(k);
    }

    if (odds && evens) {
      std::sort(toys.begin(), toys.end());
    }

    for (int j : toys) {
      std::cout << j << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
