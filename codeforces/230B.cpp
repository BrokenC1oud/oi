#include <cmath>
#include <iostream>

// ref: Sieve of Eratosthenes
bool sieve[1000001] = {false};

int main() {
  // initialize sieve
  sieve[0] = true;
  sieve[1] = true;
  for (long long i = 2; i <= 1000000; i++) {
    if (!sieve[i]) {
      for (long long j = i * i; j <= 1000000; j += i) {
        sieve[j] = true;
      }
    }
  }

  int t;
  std::cin >> t;
  while (t--) {
    long long n;
    std::cin >> n;
    long long root = std::sqrt(n);
    if (root * root != n) {
      std::cout << "NO" << std::endl;
      continue;
    }
    if (sieve[root]) {
      std::cout << "NO" << std::endl;
      continue;
    }
    std::cout << "YES" << std::endl;
  }
  return 0;
}
