#include <iostream>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int &i : a)
      std::cin >> i;
    if (a[0] == 1 || a[n - 1] == 1) {
      std::cout << "Alice" << std::endl;
    } else {
      std::cout << "Bob" << std::endl;
    }
  }
  return 0;
}
