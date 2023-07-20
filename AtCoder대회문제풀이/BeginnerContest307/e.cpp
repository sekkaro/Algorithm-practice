#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int M = 998244353;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> dp(n, vector<ll>(2));
    dp[0][0] = m;
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = dp[i - 1][0] * (m - 1);
        dp[i][1] += dp[i - 1][1] * (m - 2);
        dp[i][0] %= M;
        dp[i][1] %= M;
    }
    cout << dp[n - 1][1] << '\n';
    return 0;
}