#include <iostream>
#include <vector>
#include <string>

int main() {
    const std::vector<std::string> stems = {
        "jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"
    };
    const std::vector<std::string> branches = {
        "zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"
    };

    int year;
    if (!(std::cin >> year)) return 0;

    int offset = year - 2020;

    int stem_idx = ((6 + offset) % 10 + 10) % 10;
    int branch_idx = ((0 + offset) % 12 + 12) % 12;

    std::cout << stems[stem_idx] << branches[branch_idx] << std::endl;

    return 0;
}