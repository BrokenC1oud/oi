#include <iostream>
#include <sys/random.h>

int main() {
  int buffer[1];
  getrandom(&buffer, 1, 0);
  std::cout << buffer[0] << std::endl;
  return 0;
}
