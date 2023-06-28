#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    ll ans = LONG_LONG_MAX;
    rep(i, n)
    {
        ll now = (ll)a * i;
        string t = s;
        rotate(t.begin(), t.begin() + i, t.end());
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (t[l] != t[r])
                now += b;
            l++;
            r--;
        }
        ans = min(ans, now);
    }
    cout << ans << '\n';
    return 0;
}