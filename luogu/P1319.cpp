#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);

  bool flag = false;
  int pos = 0;
  int tot = 0;

  while (tot < n * n) {
    int i;
    scanf("%d", &i);
    for (int j = 0; j < i; j++) {
      printf("%d", flag);
      pos++;
      tot++;
      if (pos == 7) {
        printf("\n");
        pos = 0;
      }
    }
    flag = !flag;
  }

  return 0;
}
