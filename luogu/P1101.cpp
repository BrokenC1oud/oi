#include <cstdio>
#include <string>
char s[105][105];
const std::string key = "yizhong";
int n, idx[105][105]{};
void dfs(int dr, int dc, int r, int c, int cnt) {
  if (cnt == 7)
    for (int i = 1; i <= 7; i++)
      idx[r - dr * i][c - dc * i] = 1;
  if (r >= 0 && r < n && c >= 0 && c < n && s[r][c] == key[cnt])
    dfs(dr, dc, r + dr, c + dc, cnt + 1);
}
int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%s", &s[i]);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (s[i][j] == 'y')
        for (int dr = -1; dr <= 1; dr++)
          for (int dc = -1; dc <= 1; dc++)
            if (s[i + dr][j + dc] == 'i')
              dfs(dr, dc, i, j, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (idx[i][j])
        printf("%c", s[i][j]);
      else
        printf("*");
    }
    printf("\n");
  }
  return 0;
}
