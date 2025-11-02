#include <iostream>
#include <string>

int main() {
  int p1, p2, p3;
  std::cin >> p1 >> p2 >> p3;

  std::string s;
  std::cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '-') {           // start expansion
      if (s[i - 1] < s[i + 1]) { // only if in ascend
        if (s[i + 1] - s[i - 1] == 1)
          continue;
        if (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' &&
            s[i + 1] <= 'z') { // and is lower alphabet
          if (p3 == 1) {       // order
            for (char j = s[i - 1] + 1; j < s[i + 1]; j++) {
              for (int k = 0; k < p2; k++) { // repeat
                if (p1 == 1) {
                  std::cout << j;
                } else if (p1 == 2) {
                  std::cout << (char)(j - ('a' - 'A'));
                } else {
                  std::cout << '*';
                }
              }
            }
          } else if (p3 == 2) { // reverse
            for (char j = s[i + 1] - 1; j > s[i - 1]; j--) {
              for (int k = 0; k < p2; k++) {
                if (p1 == 1) {
                  std::cout << j;
                } else if (p1 == 2) {
                  std::cout << (char)(j - ('a' - 'A'));
                } else {
                  std::cout << '*';
                }
              }
            }
          }
        } else if (s[i - 1] >= 'A' && s[i - 1] <= 'Z' && s[i + 1] >= 'A' &&
                   s[i + 1] <= 'Z') { // in upper case
          if (p3 == 1) {
            for (char j = s[i - 1] + 1; j < s[i + 1]; j++) {
              for (int k = 0; k < p2; k++) {
                if (p1 == 1) {
                  std::cout << (char)(j + ('a' - 'A'));
                } else if (p1 == 2) {
                  std::cout << j;
                } else {
                  std::cout << '*';
                }
              }
            }
          } else if (p3 == 2) {
            for (char j = s[i + 1] - 1; j > s[i - 1]; j--) {
              for (int k = 0; k < p2; k++) {
                if (p1 == 1) {
                  std::cout << (char)(j + ('a' - 'A'));
                } else if (p1 == 2) {
                  std::cout << j;
                } else {
                  std::cout << '*';
                }
              }
            }
          }
        } else if (s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' &&
                   s[i + 1] <= '9') {
          if (p3 == 1) {
            for (char j = s[i - 1] + 1; j < s[i + 1]; j++) {
              for (int k = 0; k < p2; k++) {
                if (p1 == 3) {
                  std::cout << '*';
                } else {
                  std::cout << j;
                }
              }
            }
          } else if (p3 == 2) {
            for (char j = s[i + 1] - 1; j > s[i - 1]; j--) {
              for (int k = 0; k < p2; k++) {
                if (p1 == 3) {
                  std::cout << '*';
                } else {
                  std::cout << j;
                }
              }
            }
          }
        } else {
          std::cout << '-';
        }
      } else {
        std::cout << '-';
      }
    } else {
      std::cout << s[i];
    }
  }

  std::cout << std::endl;

  return 0;
}
