#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::string s = "00";
  std::string t;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> t;
    if (t != s) {
      s = t;
      ans++;
    }
  }
  std::cout << ans << std::endl;
  return 0;
}
