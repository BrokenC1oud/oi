#include <format>
#include <iostream>
#include <string>
#include <vector>

int main() {
  char c;
  std::vector<std::string> r11, r21;
  int c11_w = 0, c11_l = 0, c21_w = 0, c21_l = 0;
  while (true) {
    std::cin >> c;
    if (c == 'W') {
      c11_w++;
      c21_w++;
    } else if (c == 'L') {
      c11_l++;
      c21_l++;
    } else if (c == 'E') {
      r11.push_back(std::format("{}:{}", c11_w, c11_l));
      r21.push_back(std::format("{}:{}", c21_w, c21_l));
      break;
    }
    if ((c11_w >= 11 || c11_l >= 11) && abs(c11_w - c11_l) >= 2) {
      r11.push_back(std::format("{}:{}", c11_w, c11_l));
      c11_w = 0;
      c11_l = 0;
    }
    if ((c21_w >= 21 || c21_l >= 21) && abs(c21_w - c21_l) >= 2) {
      r21.push_back(std::format("{}:{}", c21_w, c21_l));
      c21_w = 0;
      c21_l = 0;
    }
  }

  for (std::string s : r11) {
    std::cout << s << std::endl;
  }
  std::cout << std::endl;
  for (std::string s : r21) {
    std::cout << s << std::endl;
  }

  return 0;
}
