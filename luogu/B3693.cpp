#include <iostream>

unsigned long long arr[1001][1001] = {0};
unsigned long long sums[1001][1001] = {0};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m, q;
    std::cin >> n >> m >> q;

    for (int x = 1; x <= n; x++) {
      for (int y = 1; y <= m; y++) {
        std::cin >> arr[x][y];
        sums[x][y] =
            sums[x - 1][y] + sums[x][y - 1] - sums[x - 1][y - 1] + arr[x][y];
      }
    }

    unsigned long long tot = 0;
    for (int j = 0; j < q; j++) {
      int u, v, x, y;
      std::cin >> u >> v >> x >> y;
      tot ^= sums[x][y] - sums[u - 1][y] - sums[x][v - 1] + sums[u - 1][v - 1];
    }
    std::cout << tot << std::endl;
  }
  return 0;
}
