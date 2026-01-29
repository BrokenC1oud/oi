#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    bool flag = true;
    for (int j = i, pos = 1; j != 0; j /= 10, pos++) {
      if (j % 10 % 2 != pos % 2) {
        flag = false;
        break;
      }
    }
    if (flag)
      ans++;
  }

  std::cout << ans << std::endl;

  return 0;
}
