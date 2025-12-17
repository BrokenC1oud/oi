#include <cstdio>
#include <iostream>

int field[35][35];
int n;

void fill(int x, int y) {
  if (x < 0 || x > n || y < 0 || y > n)
    return;
  if (field[x][y] == 1) {
    return;
  }
  if (field[x][y] == 0) {
    field[x][y] = 3;
    fill(x + 1, y);
    fill(x - 1, y);
    fill(x, y - 1);
    fill(x, y + 1);
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> field[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    fill(0, i);
    fill(n - 1, i);
    fill(i, 0);
    fill(i, n - 1);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0)
        printf(" ");
      if (field[i][j] == 0) {
        printf("2");
      } else if (field[i][j] == 1) {
        printf("1");
      } else {
        printf("0");
      }
    }
    printf("\n");
  }
  return 0;
}
