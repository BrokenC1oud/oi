#include <stdio.h>

unsigned long long factorial(int n) {
  if (n == 1) {
    return 1;
  }
  return factorial(n - 1) * n;
}

int main() {
  int fact = factorial(10);
  printf("factorial(10) = %d\n", fact);
  return 0;
}
