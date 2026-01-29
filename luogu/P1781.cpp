#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

struct Poll {
    long long no{};
    std::string votes;
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Poll> polls(n);
    for (const auto &[no, p]: std::views::enumerate(polls)) {
        p.no = no + 1;
        std::cin >> p.votes;
    }

    std::ranges::sort(polls, [](const Poll &a, const Poll &b) -> bool {
        if (a.votes.size() != b.votes.size()) return a.votes.size() < b.votes.size();
        return a.votes < b.votes;
    });

    std::cout << polls.rbegin()->no << std::endl << polls.rbegin()->votes << std::endl;

    return 0;
}
