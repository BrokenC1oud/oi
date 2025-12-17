#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v(4);
  for (int &i : v)
    std::cin >> i;
  std::sort(v.begin(), v.end());
  std::cout << v[3] - v[0] << ' ' << v[3] - v[1] << ' ' << v[3] - v[2]
            << std::endl;
  return 0;
}
