#include <iostream>
#include <vector>

class Solution {
public:
  static int minimumTotal(std::vector<std::vector<int>> &triangle) {
    int n = triangle.size();
    std::vector memo(n, std::vector<int>(n, 0x80000000));
    auto dfs = [&](this auto &&dfs, int i, int j) {
      if (i == n - 1) {
        return triangle[i][j];
      }
      int &res = memo[i][j];
      if (res != 0x80000000) {
        return res;
      }
      return res = std::min(dfs(i + 1, j), dfs(i + 1, j + 1)) + triangle[i][j];
    };
    return dfs(0, 0);
  }
};

int main() {
  std::vector<std::vector<int>> in = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
  std::cout << Solution::minimumTotal(in) << std::endl;
  return 0;
}
