#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  int n;
  scanf("%d\n",&n);

  std::vector<std::string> input;
  std::string t;
  for (int i = 0; i < n; i++) {
    std::getline(std::cin, t);
    input.push_back(t);
  }

  char op;
  for (std::string s : input) {
    std::stringstream ss(s);
    int a, b;
    if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c') {
      ss >> op >> a >> b;
    } else {
      ss >> a >> b;
    }

    int len;
    if (op == 'a') {
      len = printf("%d+%d=%d\n", a, b, a + b);
    } else if (op == 'b') {
      len = printf("%d-%d=%d\n", a, b, a - b);
    } else if (op == 'c') {
      len = printf("%d*%d=%d\n", a, b, a * b);
    }
    std::cout << len - 1 << std::endl;
  }

  return 0;
}
