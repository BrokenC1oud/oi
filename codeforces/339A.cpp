#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string s;
  std::cin >> s;

  std::vector<int> v;
  for (char c : s) {
    if (c == '+')
      continue;
    v.push_back(c - '0');
  }

  std::ranges::sort(v);

  for (int i = 0; i < v.size() - 1; i++) {
    std::cout << v[i] << '+';
  }
  std::cout << v[v.size() - 1] << std::endl;

  return 0;
}
