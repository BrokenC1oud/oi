#include <iostream>

int main() {
  int N;
  std::cin >> N;

  int scores[3000];
  for (int i = 0; i < N; i++) {
    std::cin >> scores[3 * i] >> scores[3 * i + 1] >> scores[3 * i + 2];
  }

  int ans = 0;
  for (int p1 = 0; p1 < N - 1; p1++) {
    for (int p2 = p1 + 1; p2 < N; p2++) {
      int chinese = scores[3 * p1] - scores[3 * p2];
      int math = scores[3 * p1 + 1] - scores[3 * p2 + 1];
      int english = scores[3 * p1 + 2] - scores[3 * p2 + 2];
      int tot = chinese + math + english;

      if (chinese <= 5 && chinese >= -5 && math <= 5 && math >= -5 &&
          english <= 5 && english >= -5 && tot <= 10 && tot >= -10)
        ans++;
    }
  }

  std::cout << ans << std::endl;

  return 0;
}
