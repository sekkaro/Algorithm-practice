#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

struct UnionFind
{
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int find(int x)
    {
        if (d[x] < 0)
            return x;
        return d[x] = find(d[x]);
    }
    bool unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
            return false;
        if (d[x] > d[y])
            swap(x, y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return find(x) == find(y); }
    int size(int x) { return -d[find(x)]; }
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> to(n);
    UnionFind uf(n);
    int i;
    rep(u, n)
    {
        int v;
        cin >> v;
        v--;
        if (uf.same(u, v))
            i = u;
        uf.unite(u, v);
        to[u].push_back(v);
    }
    vector<int> ans;
    vector<bool> chk(n);
    auto f = [&](auto f, int v) -> void
    {
        if (chk[v])
            return;
        chk[v] = true;
        ans.push_back(v);
        for (int u : to[v])
        {
            f(f, u);
        }
    };
    f(f, i);
    cout << ans.size() << '\n';
    rep(i, ans.size()) cout << ans[i] + 1 << ' ';
    cout << '\n';
    return 0;
}