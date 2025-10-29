#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string row;
  int stat[26] = {0};
  for (int i = 0; i < 4; i++) {
    std::getline(std::cin, row);
    for (char c : row) {
      if (c >= 'A' && c <= 'Z') stat[c - 'A']++;
    }
  }

  int criteria = 0;
  std::vector<std::string> res;
  for (int i = 0; i < 26; i++) {
    criteria = criteria > stat[i] ? criteria : stat[i];
  }

  while (criteria != 0) {
    std::string t;
    for (int i = 0; i < 26; i++) {
      if (stat[i] == criteria) {
        stat[i]--;
        t += '*';
      } else {
        t += ' ';
      }
      t += ' ';
    }
    criteria--;
    res.push_back(t);
  }

  for (std::string s : res) {
    int i;
    for (i = s.length() - 1; i >= 0; i--)
      ;
    std::cout << s.substr(0, i - 1) << std::endl;
  }

  for (char i = 'A'; i <= 'Z'; i++) {
    std::cout << i << ' ';
  }
  std::cout << std::endl;

  return 0;
}
