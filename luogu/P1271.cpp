#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> votes(m);
  for (int &vote : votes)
    std::cin >> vote;
  std::sort(votes.begin(), votes.end());
  for (int i = 0; i < m; i++) {
    if (i != 0)
      std::cout << ' ';
    std::cout << votes[i];
  }
  std::cout << std::endl;
  return 0;
}
