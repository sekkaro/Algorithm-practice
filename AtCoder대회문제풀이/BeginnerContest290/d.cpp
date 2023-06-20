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
        ll n, d, k;
        cin >> n >> d >> k;
        k--;
        ll GCD = gcd(n, d);
        ll ans;
        if (GCD == 1)
        {
            ans = (d * k) % n;
        }
        else
        {
            ll nn = n / GCD;
            ll dd = d / GCD;
            ans = ((dd * k) % nn) * GCD + (k / nn);
        }
        cout << ans << '\n';
    }
    return 0;
}