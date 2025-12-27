#include <algorithm>
#include <iostream>

int main() {
  bool activAI = true;

  int sA, sB, sC;
  std::cin >> sA >> sB >> sC;

  auto is_activated = [](int s) { return s >= 30 && s <= 70; };

  int result = 0;

  if (is_activated(sA)) {
    result = sA;
  } else {
    bool b_act = is_activated(sB);
    bool c_act = is_activated(sC);

    if (b_act || c_act) {
      if (b_act && c_act) {
        result = std::min(sB, sC);
      } else if (b_act) {
        result = sB;
      } else {
        result = sC;
      }
    } else {
      result = 0;
    }
  }

  std::cout << result << std::endl;

  return 0;
}
