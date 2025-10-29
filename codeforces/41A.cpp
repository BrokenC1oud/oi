#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  bool correct = s1.length() == s2.length();
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] != s2[s1.length() - i - 1]) {
      correct = false;
      break;
    }
  }
  if (correct) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
