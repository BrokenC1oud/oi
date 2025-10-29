#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  char last = 0;
  int counter = 0;
  bool dangerous = false;
  for (char c : s) {
    if (c == last) {
      counter++;
      if (counter == 7) {
        dangerous = true;
        break;
      }
    } else {
      last = c;
      counter = 1;
    }
  }

  if (dangerous) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
