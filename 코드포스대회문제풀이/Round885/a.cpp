#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    int n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;
    vector<int> xx(k), yy(k);
    rep(i, k) cin >> xx[i] >> yy[i];
    rep(i, k)
    {
        if ((x + y) % 2 == (xx[i] + yy[i]) % 2)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}