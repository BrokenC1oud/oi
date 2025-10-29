#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    int ans = 0;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);

    for (int i = 1; i < s1.size() - 1; i++) {
        if (s1[i] == '.' && s2[i] == '.') {
            ans++;
        }
        if (s1[i-1] == '.' && s2[i-1] == '.') {}
    }

    return 0;
}
