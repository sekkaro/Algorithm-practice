#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int x;
    cin >> x;
    vector<int> dp(x + 1, -1);
    dp[0] = 0;
    rep(i, m) dp[b[i]] = -2;
    rep(i, x)
    {
        if (dp[i] < 0)
            continue;
        rep(j, n)
        {
            if (i + a[j] <= x && dp[i + a[j]] != -2)
            {
                dp[i + a[j]] = 0;
            }
        }
    }
    if (!dp[x])
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}