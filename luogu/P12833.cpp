#include <iostream>

using namespace std;

constexpr int MOD = 1e9 + 7;
constexpr int MAXN = 100005;

long long dp[MAXN];
long long cnt0[MAXN];
long long cnt1[MAXN];

void precompute() {
    cnt0[1] = 1; cnt1[1] = 0; dp[1] = 0;
    cnt0[2] = 0; cnt1[2] = 1; dp[2] = 0;

    for (int i = 3; i < MAXN; ++i) {
        cnt0[i] = (cnt0[i - 2] + cnt0[i - 1]) % MOD;
        cnt1[i] = (cnt1[i - 2] + cnt1[i - 1]) % MOD;

        long long cross = cnt1[i - 2] * cnt0[i - 1] % MOD;
        dp[i] = (dp[i - 2] + dp[i - 1] + cross) % MOD;
    }
}

int main() {
    precompute();

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}