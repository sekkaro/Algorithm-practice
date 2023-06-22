#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> s(m);
    rep(i, m)
    {
        int c;
        cin >> c;
        rep(j, c)
        {
            int a;
            cin >> a;
            --a;
            s[i] |= (1 << a);
        }
    }
    int ans = 0;
    rep(i, 1 << m)
    {
        int t = 0;
        rep(j, m)
        {
            if (i >> j & 1)
                t |= s[j];
        }
        if (t == (1 << n) - 1)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}