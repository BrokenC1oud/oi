#include <iostream>
#include <vector>

class Solution {
public:
  static int change(int amount, std::vector<int> &coins) {
    int n = coins.size();
    std::vector memo(n, std::vector<int>(amount + 1, -1));
    auto dfs = [&](this auto &&dfs, int i, int c) -> int {
      if (i < 0) {
        return c == 0 ? 1 : 0;
      }
      int &res = memo[i][c];
      if (res != -1) {
        return res;
      }
      if (c < coins[i]) {
        return res = dfs(i - 1, c);
      }
      return res = dfs(i - 1, c) + dfs(i, c - coins[i]);
    };

    return dfs(n - 1, amount);
  }
};

int main() {
  std::vector coins = {1, 2, 5};
  const int result = Solution::change(5, coins);
  std::cout << result << std::endl;

  return 0;
}
