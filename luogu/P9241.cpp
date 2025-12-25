#include <algorithm>
#include <cstdio>
#include <cstring>
int t, n, bk[15];
struct plane {
  int t, d, l;
} planes[15];

bool dfs(int dep, int time) {
  if (dep > n) {
    return 1;
  }

  for (int i = 1; i <= n; i++) {
    if (bk[i] || planes[i].t + planes[i].d < time)
      continue;
    bk[i] = 1;
    if (dfs(dep + 1, std::max(time, planes[i].t) + planes[i].l)) {
      bk[i] = 0;
      return 1;
    }
    bk[i] = 0;
  }
  return 0;
}

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d %d %d", &planes[i].t, &planes[i].d, &planes[i].l);
    }
    memset(bk, 0, sizeof bk);
    if (dfs(1, 0)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
