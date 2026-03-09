#include <iostream>
#include <string>

int main() {
    std::string s;
    long long N;
    std::cin >> s >> N;
    long long len = s.length();
    while (len < N) {
        len *= 2;
    }
    while (len > (long long)s.length()) {
        long long half = len / 2;

        if (N > half) {
            if (N == half + 1) {
                N = half;
            } else {
                N = N - half - 1;
            }
        }
        len = half;
    }

    std::cout << s[N - 1] << std::endl;

    return 0;
}
