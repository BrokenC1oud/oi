#include <iostream>

int main() {
  int n, k, q;
  std::cin >> n >> k >> q;

  int recipes[200001] = {0};
  for (int i = 0; i < n; i++) {
    int l, r;
    std::cin >> l >> r;
    recipes[l]++;
    recipes[r + 1]--;
  }

  int tot = 0;
  int status = 0;
  int sums[200001] = {0};
  for (int i = 1; i <= 200000; i++) {
    status += recipes[i];
    if (status >= k) {
      tot++;
    }
    sums[i] = tot;
  }

  for (int i = 0; i < q; i++) {
    int l, r;
    std::cin >> l >> r;
    std::cout << sums[r] - sums[l - 1] << std::endl;
  }

  return 0;
}
