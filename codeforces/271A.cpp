#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int t;
  while (true) {
    n++;
    t = n;
    int presents[10] = {0};
    while (t != 0) {
      presents[t % 10]++;
      t /= 10;
    }
    bool found = true;
    for (int i = 0; i < 10; i++) {
      if (presents[i] > 1)
        found = false;
    }
    if (found)
      break;
  }

  std::cout << n << std::endl;

  return 0;
}
