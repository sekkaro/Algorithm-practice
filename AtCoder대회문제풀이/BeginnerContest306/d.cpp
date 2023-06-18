#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
const int INF = 1e9;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    vector<vector<ll>> dp(n + 5, vector<ll>(2, -INF));
    dp[0][0] = 0;
    rep(i, n)
    {
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
        dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
        if (!x[i])
        {
            dp[i + 1][0] = max(dp[i + 1][0], max(dp[i][0] + y[i], dp[i][1] + y[i]));
        }
        else
        {
            dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + y[i]);
        }
    }
    ll ans = max(dp[n][0], dp[n][1]);
    cout << ans << '\n';
    return 0;
}