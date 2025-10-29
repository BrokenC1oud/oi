#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

int main() {
  int n, m;
  std::cin >> n >> m;

  double max_score = 0;
  for (int i = 0; i < n; i++) {
    std::vector<int> scores;
    for (int j = 0; j < m; j++) {
      int t;
      std::cin >> t;
      scores.push_back(t);
    }
    std::sort(scores.begin(), scores.end());
    int tot = 0;
    for (int j = 1; j < m - 1; j++) {
      tot += scores[j];
    }
    double avg = 1.0 * tot / (m - 2);
    max_score = max_score > avg ? max_score : avg;
  }

  printf("%.2f\n", max_score);

  return 0;
}
