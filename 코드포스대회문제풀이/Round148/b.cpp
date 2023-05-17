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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        ll sum = 0;
        rep(i, n) sum += a[i];
        sort(a.begin(), a.end());
        vector<ll> sa(k + 1, 0), sar(k + 1, 0);
        int j = 0;
        rep(i, k)
        {
            sa[i + 1] = sa[i] + a[j] + a[j + 1];
            sar[i + 1] = sar[i] + a[n - i - 1];
            j += 2;
        }
        int tk = k;
        ll ans = 0;
        while (tk >= 0)
        {
            ans = max(ans, sum - sa[tk] - sar[k - tk]);
            tk--;
        }
        cout << ans << '\n';
    }
    return 0;
}