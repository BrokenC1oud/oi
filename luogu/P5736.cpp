#include <cstdio>

bool is_prime(int x) {
  if (x < 2)
    return false;
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);

  int t;
  for (int i = 0; i < n; i++) {
    scanf("%d", &t);
    if (is_prime(t)) {
      printf("%d ", t);
    }
  }
  printf("\n");

  return 0;
}
