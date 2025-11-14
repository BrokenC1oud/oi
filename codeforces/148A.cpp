#include <iostream>

int hurt[100001] = {false};

int main() {
  int k, l, m, n, d;
  std::cin >> k >> l >> m >> n >> d;
  for (int i = 1; i <= d; i++) {
    if (i % k == 0) {
      hurt[i] = true;
      continue;
    }
    if (i % l == 0) {
      hurt[i] = true;
      continue;
    }
    if (i % m == 0) {
      hurt[i] = true;
      continue;
    }
    if (i % n == 0) {
      hurt[i] = true;
      continue;
    }
  }

  int count = 0;
  for (int i = 1; i <= d; i++) {
    if (hurt[i])
      count++;
  }
  std::cout << count << std::endl;

  return 0;
}
