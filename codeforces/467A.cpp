#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int ans = 0;
  int occupied, capacity;
  for (int i = 0; i < n; i++) {
    std::cin >> occupied >> capacity;
    if (capacity - occupied >= 2)
      ans++;
  }

  std::cout << ans << std::endl;

  return 0;
}
