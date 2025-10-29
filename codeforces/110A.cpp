#include <iostream>

int main() {
  unsigned long long n;
  std::cin >> n;

  int luck = 0;
  while (n != 0) {
    if (n % 10 == 4 || n % 10 == 7)
      luck++;
    n /= 10;
  }

  bool luck_luck = luck != 0;
  while (luck != 0) {
    if (luck % 10 != 4 && luck % 10 != 7) {
      luck_luck = false;
      break;
    }
    luck /= 10;
  }

  if (luck_luck) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
