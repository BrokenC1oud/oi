#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);

  int ans = 0;
  for (char c : s) {
    if (c >= 'a' && c <= 'o') {
      ans += (c - 'a') % 3 + 1;
    } else if (c >= 'p' && c <= 's') {
      ans += c - 'p' + 1;
    } else if (c >= 't' && c <= 'v') {
      ans += c - 't' + 1;
    } else if (c >= 'w' && c <= 'z') {
      ans += c - 'w' + 1;
    } else if (c == ' ') {
      ans++;
    }
  }
  std::cout << ans << std::endl;

  return 0;
}
