#include <iostream>
#include <map>

class Solution {
public:
  static int climbStairs(int n) {
    std::map<int, int> cache;
    auto climb = [&](this auto &&climb, int left) {
      if (cache.contains(left)) {
        return cache[left];
      }
      if (left <= 1) {
        return 1;
      } else {
        int result = climb(left - 2) + climb(left - 1);
        cache[left] = result;
        return result;
      }
    };
    return climb(n);
  }
};

int main() {
  int n;
  std::cin >> n;
  std::cout << Solution::climbStairs(n) << std::endl;
  return 0;
}
