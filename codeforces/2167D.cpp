#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    std::vector<long long> a;
    int n;
    std::cin >> n;
    for (int j = 0; j < n; j++) {
      long long m;
      std::cin >> m;
      a.push_back(m);
    }
    std::sort(a.begin(), a.end());

    long long x;
    for (x = 2; x <= 1000000000000000000; x++) {
      bool found = false;
      for (long long b : a) {
        found = std::gcd(b, x) == 1;
        if (found)
          break;
      }
      if (found) {
        std::cout << x << std::endl;
        break;
      }
    }
  }
  return 0;
}
