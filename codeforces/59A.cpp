#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  int uppercase = 0, lowercase = 0;
  for (char c : s) {
    if (c >= 'A' && c <= 'Z')
      uppercase++;
    if (c >= 'a' && c <= 'z')
      lowercase++;
  }

  if (uppercase > lowercase) {
    for (int i = 0; i < s.length(); i++)
      if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 'a' - 'A';
  } else
    for (int i = 0; i < s.length(); i++)
      if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 'a' - 'A';

  std::cout << s << std::endl;

  return 0;
}
