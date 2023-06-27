#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> to(n);
    rep(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        to[u].push_back(v);
        to[v].push_back(u);
    }
    auto dfs = [&](int v, int p, int h, vector<int> &d, auto f) -> void
    {
        d[v] = h;
        for (int u : to[v])
        {
            if (u != p)
                f(u, v, h + 1, d, f);
        }
    };
    vector<int> d1(n), d2(n);
    dfs(0, -1, 0, d1, dfs);
    int a = max_element(d1.begin(), d1.end()) - d1.begin();
    dfs(a, -1, 0, d1, dfs);
    int b = max_element(d1.begin(), d1.end()) - d1.begin();
    dfs(b, -1, 0, d2, dfs);
    rep(i, n) d2[i] = max(d2[i], d1[i]);
    sort(d2.begin(), d2.end());
    int ans = 0;
    for (int k = 1; k <= n; k++)
    {
        while (ans < n && d2[ans] < k)
        {
            ans++;
        }
        cout << min(n, ans + 1) << ' ';
    }
    cout << '\n';
    return 0;
}