#include <iostream>
#include <set>

int main() {
  char c;
  std::set<char> s;
  while (std::cin >> c) {
    if (c >= 'a' && c <= 'z')
      s.insert(c);
  }
  std::cout << s.size() << std::endl;
  return 0;
}
