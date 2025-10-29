#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  char field[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> field[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (field[i][j] == '*') continue;
      int upper = i - 1 >= 0 ? i - 1 : 0;
      int lower = i + 1 == n ? i : i + 1;
      int left = j - 1 >= 0 ? j - 1 : 0;
      int right = j + 1 == m ? j : j + 1;

      int tot = 0;
      for (int k = upper; k <= lower; k++) {
        for (int l = left; l <= right; l++) {
          if (field[k][l] == '*')
            tot++;
        }
      }
      field[i][j] = '0' + tot;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cout << field[i][j];
    }
    std::cout << std::endl;
  }

  return 0;
}
