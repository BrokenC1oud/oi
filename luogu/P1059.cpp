#include <iostream>
#include <set>

int main() {
  int n;
  std::cin >> n;
  std::set<int> nums;
  while (n--) {
    int t;
    std::cin >> t;
    nums.insert(t);
  }
  std::cout << nums.size() << std::endl;
  for (auto it = nums.begin(); it != nums.end(); it++) {
    std::cout << *it << (std::next(it) == nums.end() ? "" : " ");
  }
  std::cout << std::endl;
  return 0;
}
