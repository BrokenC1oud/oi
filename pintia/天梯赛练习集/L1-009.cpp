#include <cmath>
#include <cstdio>
#include <numeric>
int main() {
  int n;
  scanf("%d", &n);
  long long upper = 0;
  long long lower = 1;
  for (int i = 0; i < n; i++) {
    long long u, l;
    scanf("%lld/%lld", &u, &l);
    long long g = std::gcd(lower, l);
    u *= lower / g;
    upper *= l / g;
    upper += u;
    lower *= l / g;
  }

  // 处理负数:先提取符号
  bool negative = upper < 0;
  upper = std::abs(upper);

  long long significant = upper / lower;
  long long denominator = upper % lower; // 使用取模

  if (denominator != 0) {
    long long g = std::gcd(denominator, lower);
    denominator /= g;
    lower /= g;
  }

  // 输出结果
  if (negative)
    printf("-");

  if (significant) {
    printf("%lld", significant);
    if (denominator) {
      printf(" %lld/%lld", denominator, lower);
    }
  } else {
    if (denominator) {
      printf("%lld/%lld", denominator, lower);
    } else {
      printf("0");
    }
  }
  printf("\n");
  return 0;
}
