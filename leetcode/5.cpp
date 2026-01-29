#include <string>
#include <string_view>

class Solution {
public:
  std::string longestPalindrome(std::string s) {
    if (s.empty())
      return "";

    std::string_view sv(s);
    std::string_view max_str = sv.substr(0, 1);

    auto expandAroundCenter = [&](int left, int right) -> std::string_view {
      while (left >= 0 && right < sv.size() && sv[left] == sv[right]) {
        --left;
        ++right;
      }
      return sv.substr(left + 1, right - left - 1);
    };

    for (int i = 0; i < sv.size(); i++) {
      auto s1 = expandAroundCenter(i, i);
      auto s2 = expandAroundCenter(i, i + 1);

      if (s1.length() > max_str.length())
        max_str = s1;
      if (s2.length() > max_str.length())
        max_str = s2;
    }

    return std::string(max_str);
  }
};
