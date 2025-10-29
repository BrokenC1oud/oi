#include <iostream>
#include <string>

struct Student {
  std::string name;
  int yo;
  int score;

  void practice() {
    yo++;
    score /= 5;
    score *= 6;
    if (score > 600)
      score = 600;
  }
};

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    Student student;
    std::cin >> student.name >> student.yo >> student.score;
    student.practice();
    std::cout << student.name << ' ' << student.yo << ' ' << student.score
              << std::endl;
  }

  return 0;
}
