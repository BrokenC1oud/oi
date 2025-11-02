#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int field[500][500];
  int temp[500][500];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      field[i][j] = i * n + j + 1;
    }
  }

  int x, y, r, z;
  for (int i = 0; i < m; i++) {
    std::cin >> x >> y >> r >> z;
    x--;
    y--;
    if (z) {
      for (int j = -r; j <= r; j++) {
        for (int k = -r; k <= r; k++) {
          temp[x + j][y + k] = field[x + k][y - j];
        }
      }
    } else {
      for (int j = -r; j <= r; j++) {
        for (int k = -r; k <= r; k++) {
          temp[x + j][y - k] = field[x + k][y + j];
        }
      }
    }
    for (int j = -r; j <= r; j++) {
      for (int k = -r; k <= r; k++) {
        field[x + j][y + k] = temp[x + j][y + k];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << field[i][j] << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
