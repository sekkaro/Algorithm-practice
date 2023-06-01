#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<P>> edg(n + 1);
        rep(i, n - 1)
        {
            int u, v;
            cin >> u >> v;
            edg[u].push_back({v, i});
            edg[v].push_back({u, i});
        }
        vector<int> dp(n + 1, 0), id(n + 1, -1);
        auto dfs = [&](int u, auto f) -> void
        {
            for (auto it : edg[u])
            {
                if (!dp[it.first])
                {
                    dp[it.first] = dp[u] + (it.second < id[u]);
                    id[it.first] = it.second;
                    f(it.first, f);
                }
            }
        };
        dp[1] = 1;
        dfs(1, dfs);
        int ans = 0;
        rep(i, n + 1) ans = max(ans, dp[i]);
        cout << ans << '\n';
    }
    return 0;
}