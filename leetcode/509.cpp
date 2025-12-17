class Solution {
public:
  static int fib(int n) {
    auto inner = [&](this auto &&inner, int n) {
      if (n <= 2)
        return 1;
      return inner(n - 1) + inner(n - 2);
    };

    return inner(n);
  }
};
