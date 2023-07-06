#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

ll c2(int n)
{
    return (ll)n * (n - 1) / 2;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    vector<int> c(n, -1);
    vector<int> nvc(2);
    auto dfs = [&](auto dfs, int i, int nc = 0) -> bool
    {
        if (c[i] != -1)
            return (c[i] == nc);
        c[i] = nc;
        nvc[nc]++;
        for (int u : to[i])
        {
            if (!dfs(dfs, u, !nc))
                return false;
        }
        return true;
    };
    ll ans = c2(n) - m;
    rep(i, n)
    {
        if (c[i] != -1)
            continue;
        nvc = vector<int>(2);
        if (!dfs(dfs, i))
        {
            cout << "0\n";
            return 0;
        }
        for (int cn : nvc)
        {
            ans -= c2(cn);
        }
    }
    cout << ans << '\n';
    return 0;
}