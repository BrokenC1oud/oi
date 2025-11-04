#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;

  unsigned long long tot = 0;
  unsigned long long mods[100000] = {1};

  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    tot += t;
    tot %= k;
    mods[tot]++;
  }

  unsigned long long ans = 0;
  for (int i = 0; i < k; i++) {
    ans += mods[i] * (mods[i] - 1) / 2;
  }
  std::cout << ans << std::endl;

  return 0;
}
