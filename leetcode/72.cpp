#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    static int minDistance(const std::string &word1, const std::string &word2) {
        std::vector f(word1.length() + 1, std::vector(word2.length() + 1, 0));
        for (int i = 1; i <= word1.length(); i++) f[i][0] = i;
        for (int j = 1; j <= word2.length(); j++) f[0][j] = j;
        for (int i = 1; i <= word1.length(); i++) {
            for (int j = 1; j <= word2.length(); j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    f[i][j] = f[i - 1][j - 1];
                } else {
                    f[i][j] = std::min({f[i][j - 1], f[i - 1][j], f[i - 1][j - 1]}) + 1;
                }
            }
        }

        return f[word1.length()][word2.length()];
    }
};

int main() {
    std::string s1, s2;

    s1 = "horse"; s2 = "ros";
    std::cout << Solution::minDistance(s1, s2) << std::endl;

    s1 = "intention"; s2 = "execution";
    std::cout << Solution::minDistance(s1, s2) << std::endl;

    return 0;
}

