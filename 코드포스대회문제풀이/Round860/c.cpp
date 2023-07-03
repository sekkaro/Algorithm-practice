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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i] >> b[i];
        ll g = 0, l = 1;
        int ans = 1;
        rep(i, n)
        {
            g = gcd(g, (ll)a[i] * b[i]);
            l = lcm(l, b[i]);
            if (g % l)
            {
                ans++;
                g = (ll)a[i] * b[i];
                l = b[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}