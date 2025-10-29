#include <iostream>

int main() {
  int m, n;
  std::cin >> m >> n;

  int res[10] = {0};

  for (int i = m; i <= n; i++) {
    int j = i;
    while (j != 0) {
      res[j % 10]++;
      j /= 10;
    }
  }

  for (int i = 0; i < 10; i++) {
    std::cout << res[i] << ' ';
  }
  std::cout << std::endl;

  return 0;
}
