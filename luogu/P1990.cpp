#include <functional>
#include <iostream>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::vector memo(N + 1, -1);
  std::function<int(int)> dfs = [&](int i) {
      if (i == 0) return 1;
      if (i == 1) return 1;
      if (i == 2) return 2;
      auto & res = memo[i];
      if (res != -1) return res;
      return res = 2 * dfs(i - 1) % 10000 + dfs(i - 3) % 10000;
  };
  std::cout << dfs(N) % 10000 << std::endl;
  return 0;
}
