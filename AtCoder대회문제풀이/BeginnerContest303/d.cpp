#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, z;
    string s;
    cin >> x >> y >> z >> s;
    int n = s.size();
    vector<vector<ll>> dp(n + 5, vector<ll>(2));
    dp[0][0] = 0;
    dp[0][1] = z;
    rep(i, n)
    {
        if (s[i] == 'a')
        {
            dp[i + 1][0] = min(dp[i][0] + x, dp[i][1] + z + x);
            dp[i + 1][1] = min(dp[i][1] + y, dp[i][0] + z + y);
        }
        else
        {
            dp[i + 1][0] = min(dp[i][0] + y, dp[i][1] + z + y);
            dp[i + 1][1] = min(dp[i][1] + x, dp[i][0] + z + x);
        }
    }
    cout << min(dp[n][0], dp[n][1]) << '\n';
    return 0;
}