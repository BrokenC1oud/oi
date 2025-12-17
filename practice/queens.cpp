#include <iostream>
#include <string>
#include <vector>

class NQueens {
  std::vector<std::vector<std::string>> solutions;

  static bool isSafe(const std::vector<std::string> &board, int row, int col, int n) {
    for (int i = 0; i < row; i++) {
      if (board[i][col] == 'Q')
        return false;
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
      if (board[i][j] == 'Q')
        return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
      if (board[i][j] == 'Q')
        return false;
    }

    return true;
  }

  void backtrack(std::vector<std::string> &board, int row, int n) {
    if (row == n) {
      solutions.push_back(board);
      return;
    }

    for (int col = 0; col < n; col++) {
      if (isSafe(board, row, col, n)) {
        board[row][col] = 'Q';
        backtrack(board, row + 1, n);
        board[row][col] = '.';
      }
    }
  }

public:
  std::vector<std::vector<std::string>> solveNQueens(int n) {
    solutions.clear();
    std::vector<std::string> board(n, std::string(n, '.'));
    backtrack(board, 0, n);
    return solutions;
  }

  void printSolutions(int n) {
    std::vector<std::vector<std::string>> results = solveNQueens(n);

    std::cout << "Find " << results.size() << " solutions: " << std::endl;

    for (int i = 0; i < results.size(); i++) {
      std::cout << "Solution #" << (i + 1) << ":" << std::endl;
      for (const std::string &row : results[i]) {
        std::cout << row << std::endl;
      }
      std::cout << std::endl;
    }
  }
};

int main() {
  int n;
  std::cout << "Queens: ";
  std::cin >> n;

  if (n < 1) {
    std::cout << "n should be greater than 0" << std::endl;
    return 1;
  }

  NQueens solver;
  solver.printSolutions(n);

  return 0;
}
