#include <algorithm>
#include <cstddef>
#include <iostream>

std::string reverse(std::string s) {
  int zero_count = 0;
  std::reverse(s.begin(), s.end());
  for (char c : s) {
    if (c == '0')
      zero_count++;
    else
      break;
  }
  s.erase(s.begin(), s.begin() + zero_count);
  return (s != "" ? s : "0");
}

std::string remove_tail(std::string s) {
  int zero_count = 0;
  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] == '0')
      zero_count++;
    else
      break;
  }
  s.erase(s.end() - zero_count, s.end());
  return (s != "" ? s : "0");
}

int main() {
  std::string s;
  std::cin >> s;

  if (s.back() == '%') {
    std::cout << reverse(s.substr(0, s.size() - 1)) << "%" << std::endl;
    return 0;
  }

  std::string left, right;

  auto pos = s.find('/');
  if (pos != std::string::npos) {
    left = s.substr(0, pos);
    right = s.substr(pos + 1);
    std::cout << reverse(left) << '/' << reverse(right) << std::endl;
    return 0;
  }

  pos = s.find('.');
  if (pos != std::string::npos) {
    left = s.substr(0, pos);
    right = s.substr(pos + 1);
    std::cout << reverse(left) << '.' << remove_tail(reverse(right))
              << std::endl;
    return 0;
  }

  std::cout << reverse(s) << std::endl;

  return 0;
}
