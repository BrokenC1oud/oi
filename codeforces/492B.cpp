#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

int main() {
  int n, l;
  std::cin >> n >> l;
  std::vector<int> pos(n);
  for (auto &i : pos)
    std::cin >> i;
  std::sort(pos.begin(), pos.end());
  int max_distance = 0;
  for (size_t i = 1; i < pos.size(); i++) {
    max_distance = max_distance > (pos[i] - pos[i - 1]) ? max_distance
                                                        : (pos[i] - pos[i - 1]);
  }
  max_distance = max_distance > pos[0] * 2 ? max_distance : pos[0] * 2;
  max_distance = max_distance > (l - pos[pos.size() - 1]) * 2
                     ? max_distance
                     : (l - pos[pos.size() - 1]) * 2;
  printf("%.10f\n", max_distance / 2.0);
  return 0;
}
