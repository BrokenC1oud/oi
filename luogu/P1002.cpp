#include <stdio.h>

int main() {
  // 使用 long long 防止路径数溢出
  long long xb, yb, xh, yh;
  long long f[40][40] = {0};
  int is_bad[40][40] = {0}; // 标记马的控制点

  if (scanf("%lld %lld %lld %lld", &xb, &yb, &xh, &yh) != 4)
    return 0;

  // 坐标偏移，防止处理马的坐标时越界 (0,0) -> (2,2)
  xb += 2;
  yb += 2;
  xh += 2;
  yh += 2;

  // 标记马的控制点（马所在的点和 8 个跳跃点）
  is_bad[xh][yh] = 1;
  is_bad[xh + 2][yh + 1] = 1;
  is_bad[xh + 2][yh - 1] = 1;
  is_bad[xh - 2][yh + 1] = 1;
  is_bad[xh - 2][yh - 1] = 1;
  is_bad[xh + 1][yh + 2] = 1;
  is_bad[xh + 1][yh - 2] = 1;
  is_bad[xh - 1][yh + 2] = 1;
  is_bad[xh - 1][yh - 2] = 1;

  // 起点初始化
  f[2][2] = 1;

  for (int i = 2; i <= xb; i++) {
    for (int j = 2; j <= yb; j++) {
      // 如果是起点已经初始化过了，跳过
      if (i == 2 && j == 2)
        continue;

      if (is_bad[i][j]) {
        f[i][j] = 0; // 被马拦截，路径数为0
      } else {
        // 状态转移方程：当前点的路径数 = 左边点 + 上边点
        f[i][j] = f[i - 1][j] + f[i][j - 1];
      }
    }
  }

  printf("%lld\n", f[xb][yb]);

  return 0;
}
