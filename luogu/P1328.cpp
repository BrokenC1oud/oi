#include <iostream>
#include <vector>

int mapping[5][5] = {
    {0, -1, 1, 1, -1}, {1, 0, -1, 1, -1}, {-1, 1, 0, -1, 1},
    {-1, -1, 1, 0, 1}, {1, 1, -1, -1, 0},
};

int main() {
  int n, t_a, t_b;
  std::cin >> n >> t_a >> t_b;

  std::vector<int> a, b;
  int t;
  for (int i = 0; i < t_a; i++) {
    std::cin >> t;
    a.push_back(t);
  }
  for (int i = 0; i < t_b; i++) {
    std::cin >> t;
    b.push_back(t);
  }

  int a_score = 0, b_score = 0;
  for (int i = 0; i < n; i++) {
    int result = mapping[a[i % a.size()]][b[i % b.size()]];
    if (result == 1) {
      a_score++;
    } else if (result == -1) {
      b_score++;
    }
  }

  std::cout << a_score << ' ' << b_score << std::endl;

  return 0;
}
