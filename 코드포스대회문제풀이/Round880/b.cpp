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
        ll n, k, g;
        cin >> n >> k >> g;
        ll ans;
        if (n * ((g - 1) / 2) >= k * g)
        {
            ans = k * g;
        }
        else
        {
            ll last = (k * g - ((n - 1) * ((g - 1) / 2))) % g;
            if (last > (g - 1) / 2)
            {
                ans = (n - 1) * ((g - 1) / 2) - g + last;
            }
            else
            {
                ans = (n - 1) * ((g - 1) / 2) + last;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}