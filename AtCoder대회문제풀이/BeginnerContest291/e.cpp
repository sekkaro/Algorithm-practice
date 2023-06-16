#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        to[y].push_back(x);
    }
    vector<int> chk(n, 0), vs;
    auto dfs = [&](int v, auto f) -> void
    {
        if (chk[v])
            return;
        chk[v] = 1;
        for (int u : to[v])
        {
            f(u, f);
        }
        vs.push_back(v);
    };
    rep(v, n) dfs(v, dfs);
    rep(i, n - 1)
    {
        int ok = 0, x = vs[i], y = vs[i + 1];
        for (int u : to[y])
        {
            if (u == x)
                ok = 1;
        }
        if (!ok)
        {
            cout << "No\n";
            return 0;
        }
    }
    vector<int> ans(n);
    rep(i, n) ans[vs[i]] = i + 1;
    cout << "Yes\n";
    rep(i, n) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}