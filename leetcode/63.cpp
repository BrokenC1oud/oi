#include <iostream>
#include <vector>

class Solution {
public:
  static int
  uniquePathsWithObstacles(std::vector<std::vector<int>> &obstacleGrid) {
    std::vector<std::vector<int>> field(
        obstacleGrid.size() + 1,
        std::vector<int>(obstacleGrid.begin()->size() + 1, 0));
    field[0][1] = 1;
    for (int i = 0; i < obstacleGrid.size(); i++) {
      for (int j = 0; j < obstacleGrid.begin()->size(); j++) {
        if (obstacleGrid[i][j] == 0) {
          field[i + 1][j + 1] = field[i][j + 1] + field[i + 1][j];
        }
      }
    }
    return field[obstacleGrid.size()][obstacleGrid.begin()->size()];
  }
};

int main() {
  std::vector<std::vector<int>> obstacleGrid = {
      {0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  std::cout << Solution::uniquePathsWithObstacles(obstacleGrid) << std::endl;

  return 0;
}
