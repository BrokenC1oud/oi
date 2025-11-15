#include <iostream>
#include <map>
#include <string>

int main() {
  int n;
  std::cin >> n;
  std::map<std::string, int> m;
  for (int i = 0; i < n; i++) {
    std::string s;
    std::cin >> s;
    if (m.contains(s)) {
      m[s]++;
      std::cout << s + std::to_string(m[s]) << std::endl;
    } else {
      std::cout << "OK" << std::endl;
      m[s] = 0;
    }
  }
  return 0;
}
