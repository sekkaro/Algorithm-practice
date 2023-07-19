#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int M = 998244353;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int n = r, cnt = 0;
        while (n >= l)
        {
            n /= 2;
            cnt++;
        }
        int ans = r / (1 << cnt - 1) - l + 1 % M;
        if (cnt > 1)
        {
            ans += max(0, r / ((1 << cnt - 2) * 3) - l + 1) * (cnt - 1) % M;
        }
        cout << cnt << ' ' << ans << '\n';
    }
    return 0;
}