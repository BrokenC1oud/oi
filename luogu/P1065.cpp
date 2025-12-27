#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int m, n;
  std::cin >> m >> n;

  std::vector<int> order(m * n);
  for (int i = 0; i < m * n; ++i)
    std::cin >> order[i];

  std::vector<std::vector<int>> mac(n + 1, std::vector<int>(m + 1));
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j)
      std::cin >> mac[i][j];
  }

  std::vector<std::vector<int>> cost(n + 1, std::vector<int>(m + 1));
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j)
      std::cin >> cost[i][j];
  }

  std::vector<int> step_now(n + 1, 1);
  std::vector<int> last_time(n + 1, 0);
  std::vector<std::vector<bool>> is_busy(m + 1,
                                         std::vector<bool>(100000, false));

  int total_max_time = 0;

  for (int i = 0; i < m * n; ++i) {
    int item_id = order[i];
    int step = step_now[item_id];
    int machine = mac[item_id][step];
    int duration = cost[item_id][step];

    for (int t = last_time[item_id] + 1;; ++t) {
      bool can_fit = true;
      for (int j = t; j < t + duration; ++j) {
        if (is_busy[machine][j]) {
          can_fit = false;
          break;
        }
      }

      if (can_fit) {
        for (int j = t; j < t + duration; ++j) {
          is_busy[machine][j] = true;
        }
        last_time[item_id] = t + duration - 1;
        step_now[item_id]++;

        total_max_time = std::max(total_max_time, last_time[item_id]);
        break;
      }
    }
  }

  std::cout << total_max_time << std::endl;

  return 0;
}
