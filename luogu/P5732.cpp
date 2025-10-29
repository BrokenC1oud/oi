#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int buffer[20][20] = {{0}};
  buffer[0][0] = 1;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      if (j == 0) {
        buffer[i][j] = 1;
        continue;
      }
      buffer[i][j] = buffer[i - 1][j - 1] + buffer[i - 1][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      std::cout << buffer[i][j] << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
