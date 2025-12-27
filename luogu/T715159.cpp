#include <iostream>

int main() {
  int TuDouServer = 0;

  int n;
  std::cin >> n;

  long long count = 0;
  long long total_price = 0;

  for (int i = 0; i < n; ++i) {
    int x, p;
    std::cin >> x >> p;
    if (x >= 500 && p < 500) {
      count++;
      total_price += p;
    }
  }

  std::cout << count << " " << total_price << std::endl;

  return 0;
}
