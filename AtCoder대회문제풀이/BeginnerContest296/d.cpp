#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    ll ans = LONG_LONG_MAX;
    for (ll a = 1; a * a - a < m; a++)
    {
        ll b = (m + a - 1) / a;
        if (a <= n && b <= n)
        {
            ans = min(ans, a * b);
        }
    }
    if (ans == LONG_LONG_MAX)
        cout << "-1\n";
    else
        cout << ans << '\n';
    return 0;
}