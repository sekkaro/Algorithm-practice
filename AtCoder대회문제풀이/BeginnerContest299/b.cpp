#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> c(n), r(n);
    rep(i, n) cin >> c[i];
    rep(i, n) cin >> r[i];
    int ans = 0;
    ll val = 0;
    rep(i, n)
    {
        if (c[i] == t && r[i] > val)
        {
            val = r[i];
            ans = i + 1;
        }
    }
    if (!val)
    {
        rep(i, n)
        {
            if (c[i] == c[0] && r[i] > val)
            {
                val = r[i];
                ans = i + 1;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}