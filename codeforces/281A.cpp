#include <iostream>
#include <string>

int main() {
  char c;
  std::cin >> c;
  if (c >= 'a' && c <= 'z')
    c -= 'a' - 'A';
  std::cout << c;

  std::string s;
  std::cin >> s;
  std::cout << s << std::endl;

  return 0;
}
