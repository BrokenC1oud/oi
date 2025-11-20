#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    std::vector<int> v;
    for (size_t i = 0; i < s.length(); i++) {
      if (s[i] == '0')
        continue;
      int a = s[i] - '0';
      for (size_t j = 0; j < s.length() - i - 1; j++) {
        a *= 10;
      }
      v.push_back(a);
    }
    std::cout << v.size() << std::endl;
    for (size_t i = 0; i < v.size(); i++) {
      if (i)
        std::cout << ' ';
      std::cout << v[i];
    }
    std::cout << std::endl;
  }
  return 0;
}
