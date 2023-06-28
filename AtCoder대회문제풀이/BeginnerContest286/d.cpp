#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> c;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        rep(j, b) c.push_back(a);
    }
    int m = c.size();
    vector<vector<bool>> dp(m + 1, vector<bool>(x + 105));
    dp[0][0] = true;
    rep(i, m)
    {
        rep(j, x + 1)
        {
            if (dp[i][j])
                dp[i + 1][j] = dp[i + 1][j + c[i]] = true;
        }
    }
    if (dp[m][x])
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}