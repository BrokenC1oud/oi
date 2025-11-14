#include <iostream>
#include <set>

int main() {
  std::set<int> s;
  int t;
  for (int i = 0; i < 4; i++) {
    std::cin >> t;
    s.insert(t);
  }
  std::cout << 4 - s.size() << std::endl;
  return 0;
}
