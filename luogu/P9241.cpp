#include <functional>
#include <iostream>
#include <vector>

struct Plane {
  int t, d, l;
};

void solve() {
  int n;
  std::cin >> n;
  std::vector<Plane> planes(n);
  for (Plane &plane : planes) {
    std::cin >> plane.t >> plane.d >> plane.l;
  }

  std::vector<bool> visited(n, false);
  bool possible = false;

  std::function<void(int, int)> dfs = [&](int last_time, int count) {
    if (possible)
      return;
    if (count == n) {
      possible = true;
      return;
    }

    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        int start_time = std::max(last_time, planes[i].t);

        if (start_time <= planes[i].t + planes[i].d) {
          visited[i] = true;
          dfs(start_time + planes[i].l, count + 1);
          visited[i] = false;
        }
      }
    }
  };

  dfs(0, 0);

  if (possible)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
