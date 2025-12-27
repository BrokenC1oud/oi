#include <iostream>
#include <vector>

std::vector<int> multiply(std::vector<int> &A, int b) {
  std::vector<int> C;
  int t = 0;
  for (int i = 0; i < A.size() || t; i++) {
    if (i < A.size())
      t += A[i] * b;
    C.push_back(t % 10);
    t /= 10;
  }
  while (C.size() > 1 && C.back() == 0)
    C.pop_back();
  return C;
}

int main() {
  int n;
  std::cin >> n;

  if (n <= 4) {
    std::cout << n << std::endl << n << std::endl;
    return 0;
  }

  std::vector<int> res;
  int sum = 0;

  for (int i = 2; sum + i <= n; i++) {
    res.push_back(i);
    sum += i;
  }

  int rem = n - sum;
  for (int i = res.size() - 1; rem > 0; i--) {
    res[i]++;
    rem--;
    if (i == 0 && rem > 0)
      i = res.size();
  }

  for (int i = 0; i < res.size(); i++) {
    std::cout << res[i] << (i == res.size() - 1 ? "" : " ");
  }
  std::cout << std::endl;

  std::vector<int> product;
  product.push_back(1);
  for (int x : res) {
    product = multiply(product, x);
  }

  for (int i = product.size() - 1; i >= 0; i--) {
    std::cout << product[i];
  }
  std::cout << std::endl;

  return 0;
}
