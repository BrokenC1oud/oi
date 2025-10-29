#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
  int matrix[5][5];
  int x, y;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        x = i;
        y = j;
      }
    }
  }

  std::cout << abs(x - 2) + abs(y - 2) << std::endl;

  return 0;
}
