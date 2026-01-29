#include <functional>
#include <iostream>
#include <string>

class Solution {
public:
    static int longestPalindromeSubseq(const std::string& s) {
        const int n = s.length();

        std::vector<int> f(n);
        for (int i = n - 1; i >= 0; i--) {
            f[i] = 1;
            int pre = 0;
            for (int j = i + 1; j < n; j++) {
                f[j] = s[i] == s[j] ? pre + 2 : std::max(f[j], f[j - 1]);
            }
        }

        return f[n - 1];
    }
};

int main() {
    std::string s;

    s = "bbbab";
    std::cout << Solution::longestPalindromeSubseq(s) << std::endl;

    s = "cbbd";
    std::cout << Solution::longestPalindromeSubseq(s) << std::endl;

    return 0;
}
