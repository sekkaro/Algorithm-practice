#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll a, b;

long double f(ll n) { return (long double)n * b + (a / sqrt(1 + n)); }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> b;
    ll l = 0, r = 1e18;
    while (l + 3 <= r)
    {
        ll m1 = (l + r) / 2;
        ll m2 = m1 + 1;
        if (f(m1) < f(m2))
            r = m2;
        else
            l = m1;
    }
    long double ans = min({f(l), f(l + 1), f(r)});
    printf("%.6Lf\n", ans);
    return 0;
}