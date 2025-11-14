#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int bills = 0;
  for (; n >= 100; n -= 100)
    bills++;
  for (; n >= 20; n -= 20)
    bills++;
  for (; n >= 10; n -= 10)
    bills++;
  for (; n >= 5; n -= 5)
    bills++;
  for (; n >= 1; n -= 1)
    bills++;

  std::cout << bills << std::endl;

  return 0;
}
