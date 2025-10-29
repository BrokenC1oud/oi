#include <iostream>
#include <vector>

int main() {
  int n, ticks;
  std::cin >> n >> ticks;

  char c;
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    std::cin >> c;
    v.push_back(c == 'B');
  }

  for (int i = 0; i < ticks; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (!v[j + 1] && v[j]) {
        std::swap(v[j + 1], v[j]);
        j++;
      }
    }
  }

  for (int gender : v) {
    if (gender) {
      std::cout << 'B';
    } else {
      std::cout << 'G';
    }
  }

  std::cout << std::endl;

  return 0;
}
