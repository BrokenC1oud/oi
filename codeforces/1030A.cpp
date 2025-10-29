#include <iostream>

int main() {
  int n;
  std::cin >> n;

  bool hard = false;
  int t;
  for (int i = 0; i < n; i++) {
    std::cin >> t;
    if (t) {
      hard = true;
      break;
    }
  }

  if (hard) {
    std::cout << "HARD" << std::endl;
  } else {
    std::cout << "EASY" << std::endl;
  }

  return 0;
}
