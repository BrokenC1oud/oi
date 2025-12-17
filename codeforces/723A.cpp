#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> m(3);
  for (int i = 0; i < 3; i++)
    std::cin >> m[i];
  std::sort(m.begin(), m.end());
  std::cout << m[2] - m[0] << std::endl;

  return 0;
}
