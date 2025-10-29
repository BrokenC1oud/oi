#include <cstdio>

int main() {
  int a[3] = {0};
  char lh, rh;
  while (scanf("%c:=%c;", &lh, &rh) == 2) {
    if (rh >= '0' && rh <= '9') {
      a[lh - 'a'] = rh - '0';
    } else {
      a[lh - 'a'] = a[rh - 'a'];
    }
  }

  printf("%d %d %d\n", a[0], a[1], a[2]);

  return 0;
}
