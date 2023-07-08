#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

ll dp[105][105][100];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n + 1) rep(j, k + 2) rep(r, d) dp[i][j][r] = -1;
    dp[0][0][0] = 0;
    rep(i, n)
    {
        rep(j, k + 1) rep(r, d)
        {
            if (dp[i][j][r] == -1)
                continue;
            { // choose
                int ni = i + 1;
                int nj = j + 1;
                int nr = (r + a[i]) % d;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], dp[i][j][r] + a[i]);
            }
            { // not choose
                int ni = i + 1;
                int nj = j;
                int nr = r;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], dp[i][j][r]);
            }
        }
    }
    cout << dp[n][k][0] << '\n';
    return 0;
}