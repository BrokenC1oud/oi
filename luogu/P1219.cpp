#include <iostream>
#include <vector>

bool isSafe(int n, std::vector<std::string> &board, int row, int col) {
  for (std::string &line : board) {
    if (line[col] == 'Q')
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

void queen(int n, std::vector<std::string> &board,
           std::vector<std::vector<std::string>> &solutions, int row) {
  if (row == n) {
    solutions.push_back(board);
  }

  for (int i = 0; i < n; i++) {
    if (isSafe(n, board, row, i)) {
      board[row][i] = 'Q';
      queen(n, board, solutions, row + 1);
      board[row][i] = '.';
    }
  }
}

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<std::string>> solutions;
  std::vector board(n, std::string(n, '.'));
  queen(n, board, solutions, 0);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0)
        std::cout << ' ';
      size_t index = solutions[i][j].find('Q');
      std::cout << index + 1;
    }
    std::cout << std::endl;
  }
  std::cout << solutions.size() << std::endl;
  return 0;
}
