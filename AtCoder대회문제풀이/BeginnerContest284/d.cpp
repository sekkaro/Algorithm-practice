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
        ll n;
        cin >> n;
        for (ll x = 2;; x++)
        {
            if (n % x)
                continue;
            n /= x;
            if (n % x == 0)
            {
                cout << x << ' ' << n / x << '\n';
                break;
            }
            ll p = round(sqrt(n));
            cout << p << ' ' << x << '\n';
            break;
        }
    }
    return 0;
}