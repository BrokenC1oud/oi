#include <array>
#include <cmath>
#include <iostream>

using namespace std;

using BigInt = array<int, 500>;

void multiply(BigInt &a, const BigInt &b) {
  BigInt temp{};
  for (int i = 0; i < 500; ++i) {
    if (a[i] == 0)
      continue;
    for (int j = 0; i + j < 500; ++j) {
      long long product = static_cast<long long>(a[i]) * b[j];
      temp[i + j] += static_cast<int>(product % 10);

      int carry = static_cast<int>(product / 10);
      int k = i + j + 1;
      while (carry > 0 && k < 500) {
        temp[k] += carry;
        carry = temp[k] / 10;
        temp[k] %= 10;
        k++;
      }
    }
  }
  int final_carry = 0;
  for (int i = 0; i < 500; ++i) {
    temp[i] += final_carry;
    final_carry = temp[i] / 10;
    temp[i] %= 10;
  }
  a = temp;
}

void solve_mersenne(int p) {
  int digits = static_cast<int>(p * log10(2)) + 1;
  cout << digits << "\n";

  BigInt result{};
  BigInt base{};
  result[0] = 1;
  base[0] = 2;

  int power = p;
  while (power > 0) {
    if (power & 1)
      multiply(result, base);
    multiply(base, base);
    power >>= 1;
  }

  result[0] -= 1;

  for (int i = 499; i >= 0; --i) {
    cout << result[i];
    if (i % 50 == 0)
      cout << "\n";
  }
}

int main() {
  int p;
  cin >> p;
  solve_mersenne(p);

  return 0;
}
