#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
    static bool wordBreak(const std::string &s, std::vector<std::string>& wordDict) {
        const auto max_len = std::ranges::max(wordDict, {}, &std::string::size).size();
        const std::unordered_set words(wordDict.begin(), wordDict.end());

        const auto n = s.size();
        std::vector<int> memo(n + 1, -1); // -1 表示没有计算过

        std::function<bool(int)> dfs = [&](int i) -> bool {
            if (i == 0) {
                return true;
            }
            int& res = memo[i];
            if (res != -1) {
                return res;
            }
            for (int j = i - 1; j >= std::max(i - max_len, 0UL); j--) {
                if (words.contains(s.substr(j, i - j)) && dfs(j)) {
                    return res = true;
                }
            }
            return res = false;
        };

        return dfs(n);
    }
};

int main() {
    std::string s;
    std::vector<std::string> words;

    s = "catsandog";
    words = {"cats", "dogs", "sand", "and", "cat"};
    std::cout << Solution::wordBreak(s, words) << std::endl;

    s = "applepenapple";
    words = {"apple", "pen"};
    std::cout << Solution::wordBreak(s, words) << std::endl;

    return 0;
}