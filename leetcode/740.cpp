#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  static int deleteAndEarn(std::vector<int> &nums) {
    auto rob = [&](std::vector<int> &nums) {
      int f0 = 0, f1 = 0;
      for (int x : nums) {
        int new_f = std::max(f1, f0 + x);
        f0 = f1;
        f1 = new_f;
      }
      return f1;
    };
    int mx = std::ranges::max(nums);
    std::vector<int> a(mx + 1);
    for (int x : nums) {
      a[x] += x;
    }
    return rob(a);
  }
};

int main() {
  std::vector input = {2, 2, 3, 3, 3, 4};
  std::cout << Solution::deleteAndEarn(input) << std::endl;
  return 0;
}
