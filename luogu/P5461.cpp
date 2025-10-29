#include <iostream>

int n;
bool guilty[1024][1024];

void pardon(int n, int x, int y) {
  for (int m = x; m < x + (1 << (n - 1)); m++) {
    for (int o = y; o < y + (1 << (n - 1)); o++) {
      guilty[m][o] = false;
    }
  }
  if (n > 1) {
    pardon(n - 1, x + (1 << (n - 1)), y);
    pardon(n - 1, x, y + (1 << (n - 1)));
    pardon(n - 1, x + (1 << (n - 1)), y + (1 << (n - 1)));
  }
}

int main() {
  std::cin >> n;

  for (int i = 0; i < 1 << n; i++) {
    for (int j = 0; j < 1 << n; j++) {
      guilty[i][j] = true;
    }
  }

  pardon(n, 0, 0);
  for (int x = 0; x < 1 << n; x++) {
    for (int y = 0; y < 1 << n; y++) {
      std::cout << guilty[x][y] << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
