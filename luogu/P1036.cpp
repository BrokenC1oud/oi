#include <cmath>
#include <functional>
#include <iostream>
#include <vector>

bool is_prime(int n) {
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  for (int i = 3; i < std::sqrt(n); i += 2) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> numbers(n);
  for (int &number : numbers)
    std::cin >> number;

  int total_prime_sums = 0;

  std::function<void(int, int, int)> dfs = [&](int start, int picked,
                                               int sum) -> void {
    if (picked == k) {
      if (is_prime(sum)) {
        total_prime_sums++;
      }
      return;
    }

    for (int i = start; i < n; i++) {
      dfs(i + 1, picked + 1, sum + numbers[i]);
    }
  };

  dfs(0, 0, 0);

  std::cout << total_prime_sums << std::endl;
  return 0;
}
