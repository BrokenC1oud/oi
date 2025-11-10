#include <iostream>
#include <string>

int main() {
  std::string src, target;
  std::getline(std::cin, src);
  std::getline(std::cin, target);
  for (char c : target) {
    std::erase(src, c);
  }
  std::cout << src << std::endl;

  return 0;
}
