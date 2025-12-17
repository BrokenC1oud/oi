#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  static int minPathSum(std::vector<std::vector<int>> &grid) {
    for (int i = 1; i < grid.size(); ++i) {
      grid[i][0] += grid[i - 1][0];
    }
    for (int i = 1; i < grid.begin()->size(); ++i) {
      grid[0][i] += grid[0][i - 1];
    }
    for (int i = 1; i < grid.size(); i++) {
      for (int j = 1; j < grid.begin()->size(); j++) {
        grid[i][j] += std::min(grid[i][j - 1], grid[i - 1][j]);
      }
    }
    return grid[grid.size() - 1][grid.begin()->size() - 1];
  }
};

int main() {
  std::vector<std::vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  std::cout << Solution::minPathSum(grid) << std::endl;
  return 0;
}
