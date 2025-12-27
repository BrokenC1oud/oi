#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> votes(n);
  for (int &vote : votes)
    std::cin >> vote;
  std::sort(votes.begin(), votes.end());
  for (int i = 0; i < n; i++) {
    if (i != 0)
      std::cout << ' ';
    std::cout << votes[i];
  }
  std::cout << std::endl;
  return 0;
}
