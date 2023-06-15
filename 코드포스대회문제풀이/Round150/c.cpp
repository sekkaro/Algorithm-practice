#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define INF 1e9

int dp[2][5][2], val[] = {1, 10, 100, 1000, 10000};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int n = s.size();
        rep(i, 5) dp[0][i][0] = dp[0][i][1] = -INF;
        dp[0][0][0] = 0;
        for (char c : s)
        {
            int x = c - 'A';
            rep(i, 5) dp[1][i][0] = dp[1][i][1] = -INF;
            rep(j, 5)
            {
                rep(k, 2)
                {
                    rep(y, 5)
                    {
                        int nj = max(j, y);
                        int nk = k + (x != y);
                        if (nk < 2)
                            dp[1][nj][nk] = max(dp[1][nj][nk], dp[0][j][k] + ((y < nj) ? -val[y] : val[y]));
                    }
                }
            }
            swap(dp[0], dp[1]);
        }
        int ans = -INF;
        rep(i, 5)
        {
            ans = max(ans, max(dp[0][i][0], dp[0][i][1]));
        }
        cout << ans << '\n';
    }
    return 0;
}