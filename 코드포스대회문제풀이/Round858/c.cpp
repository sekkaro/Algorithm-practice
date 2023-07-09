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
        vector<int> a(2 * n);
        rep(i, 2 * n) cin >> a[i];
        ll ans = 0, sum = 0;
        rep(i, 2 * n)
        {
            ans += abs(a[i]);
            sum += abs(a[i] - (-1));
        }
        if (n == 1)
            cout << abs(a[0] - a[1]) << '\n';
        else
        {
            if (n == 2)
                ans = min(ans, (ll)abs(a[3] - 2) + abs(a[2] - 2) + abs(a[1] - 2) + abs(a[0] - 2));
            if (n % 2 == 0)
            {
                rep(i, 2 * n) ans = min(ans, sum - abs(a[i] - (-1)) + abs(a[i] - n));
            }
            cout << ans << '\n';
        }
    }
    return 0;
}