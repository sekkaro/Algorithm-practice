#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    rep(i, n) cin >> a[i + 1];
    vector<ll> b(n + 1);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            b[i] += a[min(j, i - j)];
        }
    }
    vector<ll> dp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        rep(j, i) dp[i] = max(dp[i], dp[j] + b[i - j]);
    }
    cout << dp[n] << '\n';
    return 0;
}