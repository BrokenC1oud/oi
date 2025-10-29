#include <format>
#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  int x, y, z;
  int max = 0;
  std::string name, max_i;
  for (int i = 0; i < n; i++) {
    std::cin >> name >> x >> y >> z;
    if (x + y + z > max) {
      max = x + y + z;
      max_i = std::format("{} {} {} {}", name, x, y, z);
    }
  }

  std::cout << max_i << std::endl;

  return 0;
}
