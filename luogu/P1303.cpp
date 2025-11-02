#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string a, b;
  std::cin >> a >> b;

  std::vector<int> res;
  for (int i = 0; i < b.length(); i++) {
    std::vector<int> t;
    for (int j = 0; j < i; j++) {
      t.push_back(0);
    }
    int carrier = 0;
    for (int j = 0; j < a.length(); j++) {
      t.push_back(
          ((a[a.length() - j - 1] - '0') * (b[b.length() - i - 1] - '0') +
           carrier) %
          10);
      carrier = ((a[a.length() - j - 1] - '0') * (b[b.length() - i - 1] - '0') +
                 carrier) /
                10;
    }
    t.push_back(carrier);
    while (res.size() < t.size())
      res.push_back(0);
    carrier = 0;
    for (int j = 0; j < res.size(); j++) {
      int m = res[j] + t[j] + carrier;
      res[j] = m % 10;
      carrier = m / 10;
    }
    if (carrier) {
      res.push_back(carrier);
    }
  }

  bool leading = true;
  int p = 0;
  for (int i = res.size() - 1; i >= 0; i--) {
    if (res[i] != 0) {
      leading = false;
      std::cout << res[i];
      p++;
    } else {
      if (!leading) {
        std::cout << res[i];
        p++;
      }
    }
  }
  if (p == 0)
    std::cout << '0';
  std::cout << std::endl;

  return 0;
}
