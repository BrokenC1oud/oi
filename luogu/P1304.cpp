#include <iostream>
#include <vector>

int main() {
  std::vector<int> primes;
  primes.push_back(2);
  for (int i = 3; i < 10000; i += 2) {
    bool is_prime = true;
    for (int prime : primes) {
      if (i % prime == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
      primes.push_back(i);
  }

  int n;
  std::cin >> n;
  for (int i = 4; i <= n; i += 2) {
    int j, k;
    for (j = 0; j < primes.size(); j++) {
      bool found = false;
      for (k = j; k < primes.size(); k++) {
        if (primes[j] + primes[k] == i) {
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }
    std::cout << i << '=' << primes[j] << '+' << primes[k] << std::endl;
  }

  return 0;
}
