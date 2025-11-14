#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  for (int i = 0; i < s1.size(); i++) {
    std::cout << (int)(s1[i] != s2[i]);
  }
  std::cout << std::endl;

  return 0;
}
