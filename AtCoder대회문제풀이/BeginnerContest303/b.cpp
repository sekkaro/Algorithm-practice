#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    rep(i, m) rep(j, n) cin >> a[i][j];
    int ans = 0;
    for (int ni = 1; ni <= n; ni++)
    {
        for (int nj = ni + 1; nj <= n; nj++)
        {
            int ok = 1;
            rep(i, m)
            {
                rep(j, n - 1)
                {
                    if ((a[i][j] == ni && a[i][j + 1] == nj) || (a[i][j] == nj && a[i][j + 1] == ni))
                        ok = 0;
                }
            }
            if (ok)
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}