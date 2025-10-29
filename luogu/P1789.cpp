#include <cmath>
#include <cstdio>

int main() {
    int n, m, k;
    scanf("%d %d %d\n", &n, &m, &k);

    bool light[100][100] = {{false}};

    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        light[x][y] = true;
        for (int j = x > 1 ? x - 2 : 0; j < (x < n - 2 ? x + 3 : n); j++) {
            for (int k = y > 1 ? y - 2 : 0; k < (y < n - 2 ? y + 3 : n); k++) {
                int distance = abs(x - j) + abs(y - k);
                if (distance <= 2) {
                    light[j][k] = true;
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        light[x][y] = true;
        for (int j = x > 1 ? x - 2 : 0; j < (x < n - 2 ? x + 3 : n); j++) {
            for (int k = y > 1 ? y - 2 : 0; k < (y < n - 2 ? y + 3 : n); k++) {
                if (abs(x - j) <= 2 && abs(y - k) <= 2) {
                    light[j][k] = true;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!light[i][j])
                ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}