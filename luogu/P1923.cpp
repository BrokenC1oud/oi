#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  int n, k;
  std::cin >> n >> k;
  std::vector<int> nums(n);
  for (int &num : nums)
    std::cin >> num;
  std::sort(nums.begin(), nums.end());
  std::cout << nums[k] << std::endl;
  return 0;
}
