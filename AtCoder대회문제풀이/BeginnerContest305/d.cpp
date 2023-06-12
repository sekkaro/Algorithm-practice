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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> s(n, 0);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            s[i] = s[i - 1] + (a[i] - a[i - 1]);
        else
            s[i] = s[i - 1];
    }
    int q;
    cin >> q;
    rep(qi, q)
    {
        int l, r;
        cin >> l >> r;
        int li = upper_bound(a.begin(), a.end(), l) - a.begin() - 1;
        int ri = upper_bound(a.begin(), a.end(), r) - a.begin() - 1;
        ll ans = s[ri] - s[li];
        if (ri % 2 == 1 && a[ri] < r)
            ans += r - a[ri];
        if (li % 2 == 1 && l > a[li])
            ans -= l - a[li];
        cout << ans << '\n';
    }
    return 0;
}