#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;
  std::string s;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> s;
    if (s[0] == 'T') {
      tot += 4;
    } else if (s[0] == 'C') {
      tot += 6;
    } else if (s[0] == 'O') {
      tot += 8;
    } else if (s[0] == 'D') {
      tot += 12;
    } else if (s[0] == 'I') {
      tot += 20;
    }
  }
  std::cout << tot << std::endl;
  return 0;
}
