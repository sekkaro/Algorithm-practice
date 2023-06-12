#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> to(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> d(n, -1);
    priority_queue<P> pq;
    rep(i, k)
    {
        int p, h;
        cin >> p >> h;
        p--;
        d[p] = h;
        pq.emplace(h, p);
    }
    while (!pq.empty())
    {
        auto [h, v] = pq.top();
        pq.pop();
        if (d[v] != h)
            continue;
        for (int u : to[v])
        {
            if (d[u] >= h - 1)
                continue;
            d[u] = h - 1;
            pq.emplace(h - 1, u);
        }
    }
    vector<int> ans;
    rep(i, n) if (d[i] >= 0) ans.push_back(i + 1);
    cout << ans.size() << '\n';
    rep(i, ans.size()) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}