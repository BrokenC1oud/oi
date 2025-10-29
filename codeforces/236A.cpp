#include <iostream>
#include <string>

int main() {
  bool presents[26] = {false};
  std::string s;
  std::cin >> s;

  int distinct = 0;
  for (char c : s) {
    if (presents[c - 'a'])
      continue;
    presents[c - 'a'] = true;
    distinct++;
  }

  if (distinct % 2 == 0) {
    std::cout << "CHAT WITH HER!" << std::endl;
  } else {
    std::cout << "IGNORE HIM!" << std::endl;
  }

  return 0;
}
