#include <iostream>

int main() {
  int n, k, l, c, d, p, nl, np;
  std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int total_toasts = 114514;
  int total_drinks = k * l;
  total_toasts =
      (total_drinks / nl) < total_toasts ? (total_drinks / nl) : total_toasts;
  total_toasts = (c * d) < total_toasts ? (c * d) : total_toasts;
  total_toasts = (p / np) < total_toasts ? (p / np) : total_toasts;
  total_toasts /= n;
  std::cout << total_toasts << std::endl;
  return 0;
}
