#include <iostream>

int main() {
  int n;
  std::cin >> n;

  char c;
  int a = 0, d = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> c;
    if (c == 'A')
      a++;
    if (c == 'D')
      d++;
  }

  if (a > d) {
    std::cout << "Anton" << std::endl;
  } else if (a < d) {
    std::cout << "Danik" << std::endl;
  } else {
    std::cout << "Friendship" << std::endl;
  }

  return 0;
}
