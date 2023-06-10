#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    int ans = 0;
    set<int> s;
    auto solve = [&](int x, int y, auto f) -> void
    {
        if (x >= h || y >= w)
            return;
        if (s.count(a[x][y]))
            return;
        if (x == h - 1 && y == w - 1)
        {
            ans++;
            return;
        }
        s.insert(a[x][y]);
        f(x + 1, y, f);
        f(x, y + 1, f);
        s.erase(a[x][y]);
    };
    solve(0, 0, solve);
    cout << ans << '\n';
    return 0;
}