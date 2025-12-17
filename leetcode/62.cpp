#include <iostream>
#include <vector>

class Solution {
public:
  static int uniquePaths(int m, int n) {
    std::vector<std::vector<int>> field(m, std::vector<int>(n, 1));
    for (int i = 1; i < m; i++) {
      for (int j = 1; j < n; j++) {
        field[i][j] = field[i - 1][j] + field[i][j - 1];
      }
    }
    return field[m - 1][n - 1];
  }
};

int main() {
  std::cout << Solution::uniquePaths(3, 7) << std::endl;
  return 0;
}
