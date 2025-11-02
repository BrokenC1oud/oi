#include <iostream>
#include <set>

int main() {
  int n;
  std::cin >> n;

  std::set<int> logs;
  for (int i = 0; i < n; i++) {
    int op, len;
    std::cin >> op >> len;

    if (op == 1) {
      if (!logs.insert(len).second) {
        std::cout << "Already Exist" << std::endl;
      }
    } else if (op == 2) {
      if (logs.empty()) {
        std::cout << "Empty" << std::endl;
        continue;
      }
      auto pos = logs.find(len);
      if (pos != logs.end()) {
        std::cout << len << std::endl;
        logs.erase(pos);
      } else {
        auto l = logs.lower_bound(len);
        auto l1 = l, l2 = l;
        if (l == logs.begin()) {
          std::cout << *l << std::endl;
          logs.erase(l);
        } else if (l == logs.end()) {
          std::cout << *(--l) << std::endl;
          logs.erase(l);
        } else if (len - *(--l1) > *(l2) - len) {
          std::cout << *l2 << std::endl;
          logs.erase(l2);
        } else {
          std::cout << *(--l) << std::endl;
          logs.erase(l1);
        }
      }
    }
  }
  return 0;
}
