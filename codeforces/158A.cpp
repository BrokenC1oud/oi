#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;

  int ans = 0;
  int score;
  for (int i = 0; i < k; i++) {
    std::cin >> score;
    if (score == 0) {
      ans = i;
      score = -1;
      break;
    }
  }
  if (score != -1) ans = k;

  int follow_up;
  for (int i = 0; i < n - k; i++) {
    std::cin >> follow_up;
    if (follow_up != score)
      break;
    ans++;
  }

  std::cout << ans << std::endl;

  return 0;
}
