#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<char, int> m1, m2;
  for (int i = 0; i < 2; i++) {
    std::string s;
    std::cin >> s;
    for (char c : s)
      m1[c]++;
  }
  std::string s;
  std::cin >> s;
  for (char c : s)
    m2[c]++;

  if (m1.size() != m2.size()) {
    std::cout << "NO" << std::endl;
    return 0;
  }
  for (const auto &pair : m1) {
    if (pair.second != m2[pair.first]) {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }
  std::cout << "YES" << std::endl;

  return 0;
}
