#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int ans = 0;
  std::vector<int> s(4);
  for (int &l : s)
    std::cin >> l;
  for (int l : s) {
    std::vector<int> times(l);
    int tot = 0;
    for (auto &t : times) {
      std::cin >> t;
      tot += t;
    }
    std::sort(times.begin(), times.end());
    int t_t = 0;
    int i;
    for (i = 0; i < tot / times.size(); i++) {
      t_t += times[i];
      if (t_t * 2 > tot) {
        break;
      }
    }
    ans += t_t;
  }
  std::cout << ans << std::endl;
  return 0;
}
