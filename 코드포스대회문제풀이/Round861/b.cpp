#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> c(m, vector<int>(n));
        rep(i, n) rep(j, m) cin >> c[j][i];
        ll ans = 0;
        rep(i, m)
        {
            ll sum = 0, curr = 0;
            sort(c[i].begin(), c[i].end());
            rep(j, n)
            {
                curr += (ll)j * c[i][j] - sum;
                sum += c[i][j];
            }
            ans += curr;
        }
        cout << ans << '\n';
    }
    return 0;
}