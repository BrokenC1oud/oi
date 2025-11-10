#include <iostream>

int main() {
  int n;
  std::cin >> n;
  bool is_lucky = false;
  for (int i = 4; i <= n; i++) {
    if (n % i == 0) {
      int t = i;
      bool i_lucky = true;
      while (t != 0) {
        if (t % 10 != 4 && t % 10 != 7) {
          i_lucky = false;
          break;
        }
        t /= 10;
      }
      if (i_lucky) {
        is_lucky = true;
        break;
      }
    }
  }

  if (is_lucky) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
