#include <string>
#include <vector>
class Solution {
public:
  int numDecodings(std::string s) {
    s = " " + s;
    std::vector<int> f(s.length(), 0);
    f[0] = 1;
    for (int i = 1; i < s.length(); i++) {
      int a = s[i] - '0', b = (s[i - 1] - '0') * 10 + s[i] - '0';
      if (1 <= a && a <= 9)
        f[i] = f[i - 1];
      if (10 <= b && b <= 26)
        f[i] += f[i - 2];
    }
    return f[s.length() - 1];
  }
};

int main() { return 0; }
