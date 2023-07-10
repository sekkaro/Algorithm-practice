#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    vector<vector<int>> to(n1 + n2);
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    vector<int> chk(n1 + n2);
    queue<P> q;
    auto bfs = [&](int n) -> int
    {
        q.push(P(n, 0));
        chk[n] = 1;
        int dmx = 0;
        while (!q.empty())
        {
            auto [v, d] = q.front();
            q.pop();
            dmx = max(dmx, d);
            for (auto u : to[v])
            {
                if (!chk[u])
                {
                    q.push(P(u, d + 1));
                    chk[u]++;
                }
            }
        }
        return dmx;
    };
    int ans = bfs(0) + bfs(n1 + n2 - 1) + 1;
    cout << ans << '\n';
    return 0;
}