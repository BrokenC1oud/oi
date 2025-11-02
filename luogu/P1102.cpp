#include <algorithm>
#include <iostream>

int main() {
  int n, c;
  std::cin >> n >> c;

  int ns[200000];
  for (int i = 0; i < n; i++) {
    std::cin >> ns[i];
  }

  std::sort(ns, ns + n);

  int ans = 0;

  for (int left = 0; left < n; left++) {
    int r1, r2;
    while (r1 < n && ns[r1] - ns[left] <= c)
      r1++;
    while (r2 < n && ns[r2] - ns[left] < c)
      r2++;
    if (ns[r2] - ns[left] == c && ns[r1 - 1] - ns[left] == c && r1 - 1 >= 1) {
      ans += r1 - r2;
    }
  }

  std::cout << ans << std::endl;

  return 0;
}
