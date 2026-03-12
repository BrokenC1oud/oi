#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <algorithm>

int main()
{
    std::string input;
    std::cin >> input;

    const std::vector<std::string_view> months = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    const std::string_view month_part = std::string_view(input).substr(0, 3);
    const std::string_view day_part = std::string_view(input).substr(3, 2);

    const auto it = std::ranges::find(months, month_part);
    const int month_num = static_cast<int>(std::distance(months.begin(), it)) + 1;

    const int day_num = std::stoi(std::string(day_part));

    std::cout << month_num << ' ' << day_num << std::endl;

    return 0;
}