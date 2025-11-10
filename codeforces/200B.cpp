#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    tot += t;
  }
  printf("%.12lf\n", (double)tot / n);
  return 0;
}
