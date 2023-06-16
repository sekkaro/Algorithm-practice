#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<vector<mint>> dp(2, vector<mint>(2));
    dp[0][0] = dp[0][1] = 1;
    rep(i, n)
    {
        dp[1][0] = dp[1][1] = 0;
        if (a[i] != a[i + 1])
            dp[1][0] += dp[0][0];
        if (a[i] != b[i + 1])
            dp[1][1] += dp[0][0];
        if (b[i] != a[i + 1])
            dp[1][0] += dp[0][1];
        if (b[i] != b[i + 1])
            dp[1][1] += dp[0][1];
        swap(dp[0], dp[1]);
    }
    int ans = min(dp[0][0].val(), dp[0][1].val());
    cout << ans << '\n';
    return 0;
}