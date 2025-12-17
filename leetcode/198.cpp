#include <iostream>
#include <vector>

class Solution {
public:
  static int rob(const std::vector<int> &nums) {
    std::vector<int> dp(nums.size(), 0);
    if (nums.size() == 1) return nums[0];
    dp[0] = nums[0];
    dp[1] = std::max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); ++i) {
      dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i]);
    }
    return std::max(dp[dp.size() - 1], dp[dp.size() - 2]);
  }
};

int main() {
  std::vector v = {1, 2};
  const int result = Solution::rob(v);
  std::cout << "result = " << result << std::endl;
  return 0;
}
