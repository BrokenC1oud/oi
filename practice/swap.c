#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 2, b = 3;
  swap(&a, &b);
  printf("a = %d b = %d", a, b);
  return 0;
}
