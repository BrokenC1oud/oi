#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool levels[101] = {false};
  for (int j = 0; j < 2; j++) {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
      int c;
      std::cin >> c;
      levels[c] = true;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (!levels[i]) {
      std::cout << "Oh, my keyboard!" << std::endl;
      return 0;
    }
  }
  std::cout << "I become the guy." << std::endl;
  return 0;
}
