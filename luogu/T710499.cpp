#include <iostream>
#include <vector>
int main() {
  long long mod = 10e9 + 7;
  int n, k;
  std::cin >> n >> k;
  std::vector<std::vector<long long>> dp(n + 1,
                                         std::vector<long long>(k + 1, 0));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      dp[i][j] = (dp[i - 1][j - 1] + (i - 1) * dp[i - 1][j]) % mod;
    }
  }

  std::cout << dp[n][k] << std::endl;

  return 0;
}
