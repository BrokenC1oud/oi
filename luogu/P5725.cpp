#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%02d", i * n + j);
        }
        printf("\n");
    }

    printf("\n");

    int s = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }

        for (int j = 0; j < i; j++) {
            printf("%02d", s);
            s ++;
        }

        printf("\n");
    }

    return 0;
}