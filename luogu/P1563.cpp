#include <iostream>
#include <string>
#include <vector>

struct Dummy {
  int facing;
  std::string name;
};

int main() {
  int n, m;
  std::cin >> n >> m;

  std::vector<Dummy> dummies;
  for (int i = 0; i < n; i++) {
    Dummy dummy;
    std::cin >> dummy.facing >> dummy.name;
    dummies.push_back(dummy);
  }

  int pos = 0;
  for (int i = 0; i < m; i++) {
    int a, s;
    std::cin >> a >> s;
    if (dummies[pos].facing ^ a) {
      pos += s;
    } else {
      pos -= s;
    }
    while (pos < 0)
      pos += n;
    pos %= n;
  }

  std::cout << dummies[pos].name << std::endl;

  return 0;
}
