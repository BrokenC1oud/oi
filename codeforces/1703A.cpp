#include <iostream>
#include <string>

void lowercase(std::string &s) {
  for (char &c : s) {
    if (c >= 'A' && c <= 'Z')
      c += 'a' - 'A';
  }
}

int main() {
  int t;
  std::cin >> t;
  std::string s;
  while (t--) {
    std::cin >> s;
    lowercase(s);
    if (s == "yes") {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}
