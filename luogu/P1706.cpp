#include <functional>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> res(n);
  std::vector<bool> used(n + 1, false);

  std::function<void(int)> dfs = [&](int step) {
    if (step == n) {
      for (int i = 0; i < n; i++) {
        std::cout << std::setw(5) << res[i];
      }
      std::cout << std::endl;
      return;
    }

    for (int i = 1; i <= n; i++) {
      if (!used[i]) {
        res[step] = i;
        used[i] = true;

        dfs(step + 1);

        used[i] = false;
      }
    }
  };

  dfs(0);

  return 0;
}
