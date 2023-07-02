#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    rep(ti, t)
    {
        int n;
        cin >> n;
        int ans = 0;
        rep(i, n)
        {
            int a;
            cin >> a;
            if (a & 1)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}