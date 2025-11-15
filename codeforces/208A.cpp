#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s;
  std::vector<std::string> v;
  std::cin >> s;
  std::string buffer;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      if (buffer.length() != 0) {
        v.push_back(buffer);
        buffer.clear();
      }
      i += 2;
    } else {
      buffer.push_back(s[i]);
    }
  }
  v.push_back(buffer);
  for (int i = 0; i < v.size(); i++) {
    if (i) {
      std::cout << ' ';
    }
    std::cout << v[i];
  }
  std::cout << std::endl;
  return 0;
}
