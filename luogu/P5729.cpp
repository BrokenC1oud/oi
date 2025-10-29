#include <iostream>

int main() {
  int space[20][20][20] = {{{0}}};

  int w, x, h;
  std::cin >> w >> x >> h;

  int q;
  std::cin >> q;

  int ans = 0;
  for (int i = 0; i < q; i++) {
    int x1, y1, z1, x2, y2, z2;
    std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    for (int x_ = x1; x_ <= x2; x_++) {
      for (int y = y1; y <= y2; y++) {
        for (int z = z1; z <= z2; z++) {
          if (space[x_][y][z] == 0) {
            space[x_][y][z] = 1;
            ans++;
          }
        }
      }
    }
  }

  std::cout << w * x * h - ans << std::endl;

  return 0;
}
