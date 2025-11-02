#include <iostream>
#include <map>

int main() {
  int n;
  std::cin >> n;

  std::map<int, int> m;
  for (int i = 1; i <= n; i++) {
    int t;
    std::cin >> t;
    m[t] = i;
  }

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    std::cout << m[t] << std::endl;
  }

  return 0;
}
