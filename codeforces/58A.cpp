#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  char hello[] = "hello";
  int p = 0;

  for (char c : s) {
    if (c == hello[p])
      p++;
  }

  if (p == 5) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
