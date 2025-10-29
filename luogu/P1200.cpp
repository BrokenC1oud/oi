#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int score_1 = 1, score_2 = 1;
  for (char c : s1) {
    score_1 *= c - 'A' + 1;
  }
  for (char c : s2) {
    score_2 *= c - 'A' + 1;
  }

  if (score_1 % 47 == score_2 % 47) {
    std::cout << "GO" << std::endl;
  } else {
    std::cout << "STAY" << std::endl;
  }

  return 0;
}
