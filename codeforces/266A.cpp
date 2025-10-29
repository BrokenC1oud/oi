#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int ans = 0;
  char last, current;
  for (int i = 0; i < n; i++) {
    std::cin >> current;
    if (last == current)
      ans++;
    last = current;
  }

  std::cout << ans << std::endl;

  return 0;
}
