#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool present[26] = {false};
  for (int i = 0; i < n; i++) {
    char c;
    std::cin >> c;
    c = c > 'Z' ? c - 'a' + 'A' : c;
    present[c - 'A'] = true;
  }
  for (int i = 0; i < 26; i++) {
    if (!present[i]) {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }
  std::cout << "YES" << std::endl;
  return 0;
}
