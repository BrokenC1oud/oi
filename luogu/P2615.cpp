#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int res[39][39] = {{0}};

  int x = 0, y = n / 2;
  res[x][y] = 1;

  for (int i = 2; i <= n * n; i++) {
    if (x == 0 && y != n - 1) {
      x = n - 1;
      y = y + 1;
    } else if (x != 0 && y == n - 1) {
      x = x - 1;
      y = 0;
    } else if (x == 0 && y == n - 1) {
      x = x + 1;
    } else if (x != 0 && y != n - 1 && res[x - 1][y + 1] == 0) {
      x = x - 1;
      y = y + 1;
    } else {
      x = x + 1;
    }
    res[x][y] = i;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << res[i][j] << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
