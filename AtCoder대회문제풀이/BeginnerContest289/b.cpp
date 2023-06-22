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
        int a;
        cin >> a;
        a--;
        to[a].push_back(a + 1);
    }
    vector<int> chk(n, 0);
    auto dfs = [&](int v, auto f) -> void
    {
        if (chk[v])
            return;
        chk[v] = 1;
        for (int u : to[v])
        {
            f(u, f);
        }
        cout << v + 1 << ' ';
    };
    rep(i, n)
    {
        dfs(i, dfs);
    }
    cout << '\n';
    return 0;
}