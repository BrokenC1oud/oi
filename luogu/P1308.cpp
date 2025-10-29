#include <iostream>
#include <string>

int main() {
  std::string target, source;
  std::getline(std::cin, target);

  for (int i = 0; i < target.length(); i++) {
    if (target[i] >= 'A' && target[i] <= 'Z') {
      target[i] += 'a' - 'A';
    }
  }
  for (int i = 0; i < source.length(); i++) {
    if (source[i] >= 'A' && source[i] <= 'Z') {
      source[i] += 'a' - 'A';
    }
  }

  std::string word;
  int count = 0, first = -1, pos = 0;
  while (std::getline(std::cin, word, ' ')) {
    for (int i = 0; i < word.length(); i++) {
      if (word[i] >= 'A' && word[i] <= 'Z') {
        word[i] += 'a' - 'A';
      }
    }
    if (word == target) {
      if (first == -1) {
        first = pos;
      }
      count++;
    }
    pos += word.length() + 1;
  }

  if (count) {
    std::cout << count << ' ' << first << std::endl;
  } else {
    std::cout << -1 << std::endl;
  }

  return 0;
}
