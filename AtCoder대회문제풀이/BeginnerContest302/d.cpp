#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    ll d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = -1;
    rep(i, n)
    {
        ll l = a[i] - d, r = a[i] + d;
        int j = upper_bound(b.begin(), b.end(), r) - b.begin();
        if (j > 0 && b[j - 1] >= l)
        {
            ans = max(ans, a[i] + b[j - 1]);
        }
    }
    cout << ans << '\n';
    return 0;
}