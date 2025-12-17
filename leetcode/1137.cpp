#include <map>

class Solution {
public:
  static int fib(int n) {
    if (n == 0)
      return 0;
    std::map<int, int> cache;
    auto inner = [&](this auto &&inner, int n) {
      if (n <= 3)
        return 1;
      if (cache.contains(n))
        return cache[n];
      int result = inner(n - 1) + inner(n - 2) + inner(n - 3);
      cache[n] = result;
      return result;
    };

    return inner(n);
  }
};
