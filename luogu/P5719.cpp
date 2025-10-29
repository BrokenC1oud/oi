#include <cstdio>

int main() {
    long long sum1 = 0, sum2 = 0;
    int c1 = 0, c2 = 0;
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sum1 += i;
            c1 ++;
        }
        else {
            sum2 += i;
            c2 ++;
        };
    }

    printf("%.1lf %.1lf", (double)sum1 / c1, (double)sum2 / c2);

    return 0;
}
