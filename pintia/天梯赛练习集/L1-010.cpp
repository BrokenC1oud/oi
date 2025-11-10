#include <algorithm>
#include <iostream>
#include <vector>

// STL受害者

int main() {
  std::vector<int> v;
  int t;
  while (std::cin >> t) {
    v.push_back(t);
  }
  std::sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    if (i != 0) {
      std::cout << "->";
    }
    std::cout << v[i];
  }
  std::cout << std::endl;

  return 0;
}
