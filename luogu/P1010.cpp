#include <iostream>
#include <string>

std::string solve(int n) {
  if (n == 0)
    return "0";

  std::string result = "";
  for (int i = 14; i >= 0; --i) {
    int power_of_two = 1 << i;

    if (n >= power_of_two) {
      if (!result.empty()) {
        result += "+";
      }

      if (i == 0) {
        result += "2(0)";
      } else if (i == 1) {
        result += "2";
      } else if (i == 2) {
        result += "2(2)";
      } else {
        result += "2(" + solve(i) + ")";
      }

      n -= power_of_two;
    }
  }

  return result;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << solve(n) << std::endl;
}
