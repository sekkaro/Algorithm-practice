#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll t;
    cin >> n >> t;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> s(n + 1);
    rep(i, n) s[i + 1] = s[i] + a[i];
    t %= s[n];
    vector<int> ans(2);
    for (int i = 1; i <= n; i++)
    {
        if (t < s[i])
        {
            ans[0] = i;
            ans[1] = t - s[i - 1];
            break;
        }
        else if (t == s[i])
        {
            ans[0] = i + 1;
            ans[1] = 0;
            break;
        }
    }
    cout << ans[0] << ' ' << ans[1] << '\n';
    return 0;
}