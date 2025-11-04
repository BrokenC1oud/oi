#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  int v[1000000] = {0};
  int tot = 0;
  for (int i = 1; i <= n; i++) {
    int t;
    std::cin >> t;
    tot += t;
    tot %= 7;
    v[i] = tot;
  }

  int delta = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      if (v[j] == v[i - 1]) {
        delta = std::max(j - i + 1, delta);
        break;
      }
    }
  }

  std::cout << delta << std::endl;

  return 0;
}
