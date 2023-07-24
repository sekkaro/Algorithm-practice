#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using P = pair<int, int>;

struct Edge
{
    int to, cost;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int n2 = n * 2;
    vector<vector<Edge>> edges(n2);
    rep(i, m)
    {
        int u, v, a;
        cin >> u >> v >> a;
        --u;
        --v;
        if (a == 1)
        {
            edges[u].push_back((Edge){v, 1});
            edges[v].push_back((Edge){u, 1});
        }
        else
        {
            edges[n + u].push_back((Edge){n + v, 1});
            edges[n + v].push_back((Edge){n + u, 1});
        }
    }
    rep(i, k)
    {
        int s;
        cin >> s;
        s--;
        edges[s].push_back((Edge){n + s, 0});
        edges[n + s].push_back((Edge){s, 0});
    }
    const int INF = 1e9;
    vector<int> dist(n2, INF);
    deque<P> q;
    dist[0] = 0;
    q.emplace_back(0, 0);
    while (!q.empty())
    {
        auto [d, v] = q.front();
        q.pop_front();
        if (dist[v] != d)
            continue;
        for (auto u : edges[v])
        {
            int nd = d + u.cost;
            if (nd >= dist[u.to])
                continue;
            dist[u.to] = nd;
            if (u.cost == 1)
                q.emplace_back(nd, u.to);
            else
                q.emplace_front(nd, u.to);
        }
    }
    int ans = min(dist[n - 1], dist[n2 - 1]);
    if (ans == INF)
        ans = -1;
    cout << ans << '\n';
    return 0;
}