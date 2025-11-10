#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;
  int t;
  std::map<int, int> m;
  for (int i = 1; i <= n; i++) {
    std::cin >> t;
    m[t] = i;
  }
  for (int i = 1; i <= n; i++) {
    if (i != 1)
      std::cout << ' ';
    std::cout << m[i];
  }
  std::cout << std::endl;
  return 0;
}
