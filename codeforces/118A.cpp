#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] = s[i] += 'a' - 'A';
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u' || s[i] == 'y')
      continue;
    std::cout << '.' << s[i];
  }

  std::cout << std::endl;

  return 0;
}
