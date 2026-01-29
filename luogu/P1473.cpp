#include <functional>
#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::string ops(n - 1, ' ');
  const char symbols[] = {' ', '+', '-'};

  std::function<int(std::string &)> evaluate =
      [&](const std::string &path) -> int {
    std::vector<int> nums;
    std::vector<char> final_ops;

    int current_value = 1;
    for (int i = 0; i < n - 1; i++) {
      if (path[i] == ' ') {
        current_value *= 10;
        current_value += i + 2;
      }
    }
  };
  return 0;
}
