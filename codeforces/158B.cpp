#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int count[5] = {0};
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    count[t]++;
  }
  int ans = count[4];
  int pairs_3_1 = std::min(count[1], count[3]);
  count[1] -= pairs_3_1;
  count[3] -= pairs_3_1;
  ans += pairs_3_1;
  ans += count[3];
  ans += count[2] / 2;
  count[2] %= 2;
  if (count[2]) {
    if (count[1] >= 2) {
      ans += 1;
      count[1] -= 2;
      count[2] = 0;
    } else if (count[1] == 1) {
      ans += 1;
      count[1] = 0;
      count[2] = 0;
    } else {
      ans += 1;
      count[2] = 0;
    }
  }
  ans += (count[1] + 3) / 4;
  std::cout << ans << std::endl;

  return 0;
}
