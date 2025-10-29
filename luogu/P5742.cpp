#include <iostream>

struct Student {
  int id;
  int score;
  int extended_score;

  bool is_excellent() {
    return score * 7 + extended_score * 3 >= 800 &&
           score + extended_score > 140;
  }
};

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    Student student;
    std::cin >> student.id >> student.score >> student.extended_score;
    if (student.is_excellent()) {
      std::cout << "Excellent" << std::endl;
    } else {
      std::cout << "Not excellent" << std::endl;
    }
  }

  return 0;
}
