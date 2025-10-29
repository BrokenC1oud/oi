#include <iostream>

int main() {
    int occurence[26] = {0};
    char c;
    while (std::cin >> c) occurence[c - 'a']++;

    int max = -1, min = 114514;
    for (int i: occurence) {
        if (i > max) max = i;
        if (i < min && i != 0) min = i;
    }

    int delta = max - min;
    bool lucky = true;
    for (int i = 2; i < delta / 2 - 1; i++) {
        if (delta % i == 0) {
            lucky = false;
            break;
        }
    }
    if (delta < 2) lucky = false;

    if (lucky) {
        std::cout << "Lucky Word" << std::endl;
    } else {
        std::cout << "No Answer" << std::endl;
    }
    std::cout << delta << std::endl;

    return 0;
}