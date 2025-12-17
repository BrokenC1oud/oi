#include <iostream>

unsigned long long cache[1000] = {0, 1, 1};

unsigned long long fibonacci(const int n) {
  if (n == 1 || n == 2)
    return 1;
  if (cache[n] != 0)
    return cache[n];
  const unsigned long long result = fibonacci(n - 1) + fibonacci(n - 2);
  cache[n] = result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << "fib(" << n << ") = " << fibonacci(n) << std::endl;
  return 0;
}
