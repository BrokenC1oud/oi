#include <iostream>
#include <vector>

bool is_leap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
  std::vector<int> years;
  int start, end;
  std::cin >> start >> end;

  for (int i = start; i <= end; i++) {
    if (is_leap(i))
      years.push_back(i);
  }

  std::cout << years.size() << std::endl;
  for (int year : years) {
    std::cout << year << ' ';
  }
  std::cout << std::endl;

  return 0;
}
