#include <cstdio>

int main() {
  bool lights[2000000] = {false};

  int n;
  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    double a;
    int t;

    scanf("%lf %d", &a, &t);

    for (int j = 1; j <= t; j++) {
      int b = (int)(j * a);
      lights[b] = !lights[b];
    }
  }

  for (int i = 0; i < 2000000; i++) {
    if (lights[i]) {
      printf("%d\n", i);
      break;
    }
  }

  return 0;
}
