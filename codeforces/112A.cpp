#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  int ans = 0;
  for (int i = 0; i < s1.length(); i++) {
    char c1 = s1[i], c2 = s2[i];
    if (c1 >= 'A' && c1 <= 'Z') c1 += 'a' - 'A';
    if (c2 >= 'A' && c2 <= 'Z') c2 += 'a' - 'A';
    if (c1 == c2)
      continue;
    if (c1 - c2 < 0) {
      ans = -1;
      break;
    }
    ans = 1;
    break;
  }

  std::cout << ans << std::endl;

  return 0;
}
