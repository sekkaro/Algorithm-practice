#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    rep(i, n) sum += a[i];
    vector<ll> dp(n, sum);
    rep(i, n)
    {
        dp[i] -= a[i];
        if (i < n - 1 && (a[i + 1] == a[i] + 1 || a[i + 1] == a[i]))
            dp[i + 1] = dp[i];
    }
    if ((a[n - 1] + 1) % m == a[0])
    {
        int idx = 0;
        rep(i, n)
        {
            if (a[i + 1] != a[i] + 1 && a[i + 1] != a[i])
                break;
            idx++;
        }
        dp[idx] = max(0LL, dp[idx] - (sum - dp[n - 1]));
    }
    ll ans = sum;
    rep(i, n) ans = min(ans, dp[i]);
    cout << ans << '\n';
    return 0;
}