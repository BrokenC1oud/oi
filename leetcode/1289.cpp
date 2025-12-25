#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

class Solution {
public:
  int minFallingPathSum(vector<vector<int>> &grid) {
    int n = grid.size();
    if (n == 1)
      return grid[0][0];
    int iMin1 = -1, iMin2 = -1;

    for (int i = 0; i < n; ++i) {
      int nextMin1 = -1, nextMin2 = -1;

      for (int j = 0; j < n; ++j) {
        if (i > 0) {
          if (j != iMin1) {
            grid[i][j] += grid[i - 1][iMin1];
          } else {
            grid[i][j] += grid[i - 1][iMin2];
          }
        }
        if (nextMin1 == -1 || grid[i][j] < grid[i][nextMin1]) {
          nextMin2 = nextMin1;
          nextMin1 = j;
        } else if (nextMin2 == -1 || grid[i][j] < grid[i][nextMin2]) {
          nextMin2 = j;
        }
      }
      iMin1 = nextMin1;
      iMin2 = nextMin2;
    }

    return grid[n - 1][iMin1];
  }
};
