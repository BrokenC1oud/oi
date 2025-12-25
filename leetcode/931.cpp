#include <algorithm>
#include <vector>
class Solution {
public:
  static int minFallingPathSum(std::vector<std::vector<int>> &matrix) {
    std::vector<std::vector<int>> dp(
        matrix.size(), std::vector<int>(matrix.begin()->size(), 0));
    for (int i = 1; i < matrix.size(); i++) {
      for (int j = 0; j < matrix.begin()->size(); j++) {
        if (j == 0) {
          dp[i][j] = std::min(dp[i - 1][j], dp[i - 1][j + 1]);
        } else if (j == matrix.begin()->size() - 1) {
          dp[i][j] = std::min(dp[i - 1][j - 1], dp[i - 1][j]);
        } else {
          dp[i][j] = std::min(std::min(dp[i - 1][j - 1], dp[i - 1][j]),
                              dp[i - 1][j + 1]);
        }
        dp[i][j] += matrix[i][j];
      }
    }
    int ans = 11451419;
    for (int i : *(dp.rbegin())) {
      ans = std::min(ans, i);
    }
    return ans;
  }
};

int main() { return 0; }
