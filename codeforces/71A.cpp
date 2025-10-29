#include <iostream>

int main() {
  int n;
  std::cin >> n;

  std::string s;
  for (int i = 0; i < n; i++) {
    std::cin >> s;
    if (s.size() > 10) {
      std::cout << s.front() << s.size() - 2 << s.back() << std::endl;
    } else {
      std::cout << s << std::endl;
    }
  }

  return 0;
}
