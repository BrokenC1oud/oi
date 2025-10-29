#include <iostream>

int main() {
  int n;
  std::cin >> n;

  char original_cube[10][10];
  char target_cube[10][10];

  for (int i = 0; i < n; i++)
    std::cin >> original_cube[i];
  for (int i = 0; i < n; i++)
    std::cin >> target_cube[i];

  return 0;
}
