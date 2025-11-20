#include <stdio.h>

int sum(int sums[], int count);

int main() {
  int sums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tot = sum(sums, 10);
  printf("count = %d", tot);
  return 0;
}

int sum(int nums[], int count) {
  int tot = 0;
  for (int i = 0; i < count; i++) {
    tot += nums[i];
  }
  return tot;
}
