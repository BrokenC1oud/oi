#include <iostream>

void solve() {
  int n, a;
  std::cin >> n >> a;

  int f[3000] = {0};
  f[0] = 1;
  int len = 1;

  for (int i = 2; i <= n; i++) {
    int carry = 0;
    for (int j = 0; j < len; j++) {
      int temp = f[j] * i + carry;
      f[j] = temp % 10;
      carry = temp / 10;
    }
    while (carry) {
      f[len] = carry % 10;
      carry /= 10;
      len++;
    }
  }

  int count = 0;
  for (int i = 0; i < len; i++) {
    if (f[i] == a)
      count++;
  }
  std::cout << count << std::endl;
}

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
