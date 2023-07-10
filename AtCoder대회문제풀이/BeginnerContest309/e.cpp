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
    for (int i = 1; i < n; i++)
    {
        int p;
        cin >> p;
        --p;
        to[p].push_back(i);
    }
    vector<int> d(n, -1);
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        --x;
        d[x] = max(d[x], y);
    }
    auto dfs = [&](auto dfs, int v) -> void
    {
        for (int u : to[v])
        {
            d[u] = max(d[u], d[v] - 1);
            dfs(dfs, u);
        }
    };
    dfs(dfs, 0);
    int ans = 0;
    rep(i, n) if (d[i] != -1) ans++;
    cout << ans << '\n';
    return 0;
}