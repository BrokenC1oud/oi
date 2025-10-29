#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string a, b;
  std::cin >> a >> b;

  std::vector<int> res;
  int max_len = std::max(a.length(), b.length());
  while (a.length() < max_len)
    a = '0' + a;
  while (b.length() < max_len)
    b = '0' + b;
  int carrier = 0;
  for (int i = max_len - 1; i >= 0; i--) {
    res.push_back((a[i] + b[i] + carrier - 2 * '0') % 10);
    carrier = (a[i] + b[i] + carrier - 2 * '0') / 10;
  }
  if (carrier)
    res.push_back(carrier);

  for (int i = res.size() - 1; i >= 0; i--) {
    std::cout << res[i];
  }
  std::cout << std::endl;

  return 0;
}
