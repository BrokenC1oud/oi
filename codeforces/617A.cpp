#include <iostream>

int main() {
  int distance;
  std::cin >> distance;
  int ans = 0;
  ans += distance / 5;
  distance %= 5;
  ans += distance / 4;
  distance %= 4;
  ans += distance / 3;
  distance %= 3;
  ans += distance / 2;
  distance %= 2;
  ans += distance;

  std::cout << ans << std::endl;
  return 0;
}
