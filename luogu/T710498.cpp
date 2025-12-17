#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
struct Canvas {
  std::vector<std::string> canvas;

  int x, y;
  int size;
  int thickness;

  Canvas(int n, int k) : size(n), thickness(k) {
    canvas.resize(n, std::string(n, '.'));
    x = n / 2;
    y = n / 2;
  }

  void op(char op) {
    if (op == 'L') {
      if (x != 0 && x != size - 1) {
        x--;
      }
    } else if (op == 'R') {
      if (x != 0 && x != size - 1) {
        x++;
      }
    } else if (op == 'U') {
      if (y != 0 && y != size - 1) {
        y--;
      }
    } else if (op == 'D') {
      if (y != 0 && y != size - 1) {
        y++;
      }
    } else {
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          int dist = std::abs(i - x) + std::abs(j - y);
          if (dist < thickness)
            canvas[i][j] = op;
        }
      }
    }
  }

  void display() {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        std::cout << canvas[i][j];
      }
      std::cout << std::endl;
    }
  }
};

int main() {
  int n, k;
  std::cin >> n >> k;
  std::string ops;
  std::cin >> ops;
  Canvas canvas(n, k);
  for (char op : ops) {
    canvas.op(op);
  }
  canvas.display();

  return 0;
}
