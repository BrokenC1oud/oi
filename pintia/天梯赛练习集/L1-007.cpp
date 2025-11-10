#include <iostream>
#include <string>

int main() {
  std::string map[] = {"ling", "yi",  "er", "san", "si",
                       "wu",   "liu", "qi", "ba",  "jiu"};

  std::string n;
  std::cin >> n;

  for (int i = 0; i < n.length(); i++) {
    if (i != 0) {
      std::cout << ' ';
    }
    if (n[i] == '-') {
      std::cout << "fu";
    } else {
      std::cout << map[n[i] - '0'];
    }
  }

  std::cout << std::endl;

  return 0;
}
