#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> names;
std::vector<int> chinese, math, english;

int main() {
  int n;
  std::cin >> n;

  std::string name;
  int x, y, z;
  for (int i = 0; i < n; i++) {
    std::cin >> name >> x >> y >> z;
    names.push_back(name);
    chinese.push_back(x);
    math.push_back(y);
    english.push_back(z);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (abs(chinese[i] - chinese[j]) <= 5 && abs(math[i] - math[j]) <= 5 &&
          abs(english[i] - english[j]) <= 5 &&
          abs(chinese[i] + math[i] + english[i] - chinese[j] - math[j] -
              english[j]) <= 10) {
        std::cout << names[i] << ' ' << names[j] << std::endl;
      }
    }
  }

  return 0;
}
