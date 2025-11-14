#include <iostream>

int main() {
  long long n, k;
  std::cin >> n >> k;

  if (k > n / 2 + n % 2) {
    k -= n / 2 + n % 2;
    k *= 2;
  } else {
    k *= 2;
    k--;
  }
  std::cout << k << std::endl;

  return 0;
}
