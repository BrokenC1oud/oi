#include <iostream>

struct entity {
  int x;
  int y;

  int direction;

  entity() : x(0), y(0), direction(0) {}
  entity(int x_, int y_) : x(x_), y(y_), direction(0) {}

  void change_direction() {
    direction++;
    direction %= 4;
  }

  void step() {
    if (direction == 0) {
      x--;
    } else if (direction == 1) {
      y++;
    } else if (direction == 2) {
      x++;
    } else if (direction == 3) {
      y--;
    }
  }

  void step_back() {
    if (direction == 0) {
      x++;
    } else if (direction == 1) {
      y--;
    } else if (direction == 2) {
      x--;
    } else if (direction == 3) {
      y++;
    }
  }

  bool border() { return x < 0 || y < 0 || x >= 10 || y >= 10; }
};

int main() {
  char map[10][10];

  entity cow, farmer;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      std::cin >> map[i][j];
      if (map[i][j] == 'C')
        cow = entity(i, j);
      if (map[i][j] == 'F')
        farmer = entity(i, j);
    }
  }

  entity initial_cow = cow, initial_farmer = farmer;

  int steps = 0;
  while (true) {
    cow.step();
    if (cow.border() || map[cow.x][cow.y] == '*') {
      cow.step_back();
      cow.change_direction();
    }

    farmer.step();
    if (farmer.border() || map[farmer.x][farmer.y] == '*') {
      farmer.step_back();
      farmer.change_direction();
    }

    steps++;
    if (farmer.x == cow.x && farmer.y == cow.y) {
      break;
    }

    if (initial_cow.x == cow.x && initial_cow.y == cow.y &&
        initial_farmer.x == farmer.x && initial_farmer.y == farmer.y &&
        initial_cow.direction == cow.direction && initial_farmer.direction == farmer.direction) {
      steps = 0;
      break;
    }

    if (steps >= 100000) {
      steps = 0;
      break;
    }
  }

  std::cout << steps << std::endl;

  return 0;
}
