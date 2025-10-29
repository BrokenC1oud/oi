#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int res[10][10] = {{0}};
  int x = 1, y = 1;
  int tot = 2;
  res[1][1] = 1;
  while (tot <= n * n) {
    while (y + 1 <= n && res[x][y + 1] == 0) {
      y++;
      res[x][y] = tot;
      tot++;
    }
    while (x + 1 <= n && res[x + 1][y] == 0) {
      x++;
      res[x][y] = tot;
      tot++;
    }
    while (y - 1 >= 1 && res[x][y - 1] == 0) {
      y--;
      res[x][y] = tot;
      tot++;
    }
    while (x - 1 >= 1 && res[x - 1][y] == 0) {
      x--;
      res[x][y] = tot;
      tot++;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%3d", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}
