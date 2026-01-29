#include <algorithm>
#include <vector>

class Solution {
public:
  int maximalSquare(std::vector<std::vector<char>> &matrix) {
    if (matrix.empty() || matrix[0].empty()) {
      return 0;
    }

    int rows = matrix.size();
    int cols = matrix.begin()->size();
    int maxSide = 0;

    std::vector<std::vector<int>> dp(rows, std::vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (matrix[i][j] == '1') {
          if (i == 0 || j == 0) {
            dp[i][j] = 1;
          } else {
            dp[i][j] =
                std::min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
          }
          maxSide = std::max(maxSide, dp[i][j]);
        }
      }
    }

    return maxSide * maxSide;
  }
};
