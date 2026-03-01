#include <functional>
#include <iostream>
#include <string>
#include <vector>
class Solution {
public:
  static int numDistinct(std::string s, std::string t) {
    int n = s.size(), m = t.size();

    std::vector memo(n, std::vector<int>(m, -1));

    std::function<int(int, int)> dfs = [&](int i, int j) -> int {
      if (i < j) {
        return 0;
      }
      if (j < 0) {
        return 1;
      }
      int &res = memo[i][j];
      if (res != -1) {
        return res;
      }
      res = dfs(i - 1, j);
      if (s[i] == t[j]) {
        res += dfs(i - 1, j - 1);
      }

      return res;
    };

    return dfs(n - 1, m - 1);
  }
};

#ifdef LOCAL
int main() {
  std::string s = "rabbbit";
  std::string t = "rabbit";
  std::cout << Solution::numDistinct(s, t) << std::endl;
  return 0;
}
#endif
