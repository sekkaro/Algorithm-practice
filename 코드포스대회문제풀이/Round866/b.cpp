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
        string s;
        cin >> s;
        int n = s.size();
        int cnt = 0, res = 0;
        rep(ni, 2)
        {

            rep(i, n)
            {
                if (s[i] == '1')
                {
                    cnt++;
                }
                else
                {
                    res = max(res, cnt);
                    cnt = 0;
                }
            }
            res = max(res, cnt);
        }
        res = min(res, n);
        if (res == n)
            cout << (ll)n * n << '\n';
        else
        {

            ll ans = 0;
            for (int i = 1; i <= n && res > 0; i++, res--)
            {
                ans = max(ans, (ll)res * i);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}