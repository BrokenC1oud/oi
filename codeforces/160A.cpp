#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  int t, tot = 0;
  std::vector<int> coins;
  for (int i = 0; i < n; i++) {
    std::cin >> t;
    coins.push_back(t);
    tot += t;
  }
  std::sort(coins.begin(), coins.end());
  int owned = 0;
  int count = 0;
  for (int i = coins.size() - 1; i >= 0; i--) {
    owned += coins[i];
    count++;
    if (owned >= tot / 2 + 1) {
      break;
    }
  }
  std::cout << count << std::endl;
  return 0;
}
