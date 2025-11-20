#include <iostream>
#include <string>

char invert(char c) {
  if (c >= 'a' && c <= 'z')
    return (char)(c - 'a' + 'A');
  return (char)(c - 'A' + 'a');
}

int main() {
  std::string s;
  std::cin >> s;
  bool all_capital = true;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      all_capital = false;
      break;
    }
  }
  for (char c : s)
    if (all_capital)
      std::cout << invert(c);
    else
      std::cout << c;
  std::cout << std::endl;

  return 0;
}
