#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int m;
    std::string s;
    std::cin >> m >> s;
    int odd_a = 0, even_a = 0;
    for (int j = 0; j < 2 * m; j++) {
      if (s[j] == 'A') {
        if (j % 2 == 0) {
          even_a++;
        } else {
          odd_a++;
        }
      }
    }
    std::cout << std::min(odd_a, even_a);
  }

  return 0;
}
