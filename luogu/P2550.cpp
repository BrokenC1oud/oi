#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int targets[7] = {0};
  for (int & target : targets) {
    std::cin >> target;
  }

  int ans[7] = {0};

  for (int i = 0; i < n; i++) {
    int tot = 0;
    for (int j = 0; j < 7; j++) {
      int k;
      std::cin >> k;
      for (int target : targets) {
        if (target == k) {
          tot++;
          break;
        }
      }
    }
    ans[tot - 1]++;
  }

  for (int i = 6; i >= 0; i--)
    std::cout << ans[i] << ' ';

  return 0;
}
