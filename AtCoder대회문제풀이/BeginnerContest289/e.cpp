#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

const int INF = 1e9;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> c(n);
        rep(i, n) cin >> c[i];
        vector<vector<int>> to(n);
        rep(i, m)
        {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            to[u].push_back(v);
            to[v].push_back(u);
        }
        vector<vector<int>> dist(n, vector<int>(n, INF));
        queue<P> q;
        auto push = [&](int i, int j, int d)
        {
            if (dist[i][j] != INF)
                return;
            dist[i][j] = d;
            q.emplace(i, j);
        };
        push(0, n - 1, 0);
        while (!q.empty())
        {
            auto [a, b] = q.front();
            q.pop();
            for (int u : to[a])
            {
                for (int v : to[b])
                {
                    if (c[u] == c[v])
                        continue;
                    push(u, v, dist[a][b] + 1);
                }
            }
        }
        if (dist[n - 1][0] == INF)
            cout << "-1\n";
        else
            cout << dist[n - 1][0] << '\n';
    }
    return 0;
}