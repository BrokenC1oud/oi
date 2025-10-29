#include <cmath>
#include <iostream>

int main() {
  int n[30];
  int i = 0;
  long long s = 0;
  while (std::cin >> n[i++])
    ;
  for (int j = 0; j < i; j++)
    s += n[j];
  s *= (long long)std::pow(2, i - 2);
  std::cout << s << std::endl;

  return 0;
}
