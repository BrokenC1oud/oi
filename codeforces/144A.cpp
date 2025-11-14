#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> que;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    que.push_back(t);
  }
  int max_position =
      std::distance(que.begin(), std::max_element(que.begin(), que.end()));
  int min_element = *std::min_element(que.begin(), que.end());
  int min_position;
  for (min_position = 0; que[n - 1 - min_position] != min_element; min_position++) {}
  int moves = max_position + min_position;
  if (moves >= n)
    moves--;
  std::cout << moves << std::endl;

  return 0;
}
