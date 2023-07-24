#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, vector<int>> m;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }
    map<int, bool> chk;
    int ans = 1;
    auto dfs = [&](auto dfs, int v) -> void
    {
        if (chk[v])
            return;
        chk[v] = true;
        ans = max(ans, v);
        for (int u : m[v])
        {
            dfs(dfs, u);
        }
    };
    dfs(dfs, 1);
    cout << ans << '\n';
    return 0;
}