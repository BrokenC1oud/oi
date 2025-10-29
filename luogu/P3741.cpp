#include <iostream>

int count(std::string s) {
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'V' && s[i + 1] == 'K') {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  std::string s;
  std::cin >> n >> s;

  int ans = count(s);
  for (int i = 0; i < s.length(); i++) {
    std::string t = s;
    t[i] = 'V';
    ans = std::max(ans, count(t));
    t[i] = 'K';
    ans = std::max(ans, count(t));
  }

  std::cout << ans << std::endl;

  return 0;
}
