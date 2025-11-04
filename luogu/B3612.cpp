#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> v;
  int t;
  for (int i = 0; i < n; i++) {
    std::cin >> t;
    v.push_back(t);
  }

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int l, r;
    std::cin >> l >> r;
    int tot = 0;
    for (int j = l - 1; j < r; j++) {
      tot += v[j];
    }
    std::cout << tot << std::endl;
  }

  return 0;
}
