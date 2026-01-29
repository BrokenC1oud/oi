#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

struct Student {
    long long no;
    int chinese, math, english;

    [[nodiscard]] int total_points() const {
        return chinese + math + english;
    }

    bool operator<(const Student &other) const {
        if (total_points() != other.total_points()) return total_points() > other.total_points();

        if (chinese != other.chinese) return chinese > other.chinese;

        return no < other.no;
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n);
    for (const auto& [index, student] : std::views::enumerate(students)) {
        student.no = index + 1;
        std::cin >> student.chinese >> student.math >> student.english;
    }

    std::sort(students.begin(), students.end());

    for (auto student : students | std::views::take(5)) {
        std::cout << student.no << ' ' << student.total_points() << std::endl;
    }

    return 0;
}