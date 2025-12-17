#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int untreated = 0;
  int officer = 0;
  while (n--) {
    int e;
    std::cin >> e;
    if (e == -1) {
      if (officer > 0) {
        officer--;
      } else {
        untreated++;
      }
    } else {
      officer += e;
    }
  }
  std::cout << untreated << std::endl;
  return 0;
}
