#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  long long ans = 0;
  long long k = n / 2;
  ans += k;
  if (n % 2 != 0) {
    ans -= n;
  }
  std::cout << ans << std::endl;
  return 0;
}
