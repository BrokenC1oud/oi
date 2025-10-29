#include <algorithm>
#include <iostream>
#include <string>

int main() {
  int q;
  std::cin >> q;

  for (int i = 0; i < q; i++) {
    int n;
    std::string a, b;
    std::cin >> n >> a >> b;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    if (a == b) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
