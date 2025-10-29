#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::string s;
  int x = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> s;
    for (char c : s) {
      if (c == '+') {
        x++;
        break;
      } else if (c == '-') {
        x--;
        break;
      }
    }
  }

  std::cout << x << std::endl;

  return 0;
}
