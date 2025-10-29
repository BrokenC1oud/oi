#include <cstddef>
#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::string document;
  std::cin >> document;

  for (int i = 0; i < n; i++) {
    int op;
    std::cin >> op;
    if (op == 1) {
      std::string str;
      std::cin >> str;
      document.append(str);
    } else if (op == 2) {
      int start, len;
      std::cin >> start >> len;
      document = document.substr(start, len);
    } else if (op == 3) {
      int pos;
      std::string str;
      std::cin >> pos >> str;
      document.insert(pos, str);
    } else if (op == 4) {
      std::string target;
      std::cin >> target;
      size_t pos = document.find(target);
      if (pos != std::string::npos) {
        std::cout << pos << std::endl;
      } else {
        std::cout << -1 << std::endl;
      }
      continue;
    }

    std::cout << document << std::endl;
  }

  return 0;
}
