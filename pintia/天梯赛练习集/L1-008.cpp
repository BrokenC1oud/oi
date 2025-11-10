#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  int c = a;
  int tot = 0;
  for (int i = 0; i < (b - a + 5) / 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%5d", c);
      tot += c;
      c++;

      if (c > b)
        break;
    }
    printf("\n");
  }

  printf("Sum = %d", tot);

  return 0;
}
