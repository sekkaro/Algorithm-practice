#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

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

bool solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> deg(n);
    UnionFind uf(n);
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        deg[u]++;
        deg[v]++;
        uf.unite(u, v);
    }
    int ones = 0;
    rep(i, n)
    {
        if (!deg[i] || deg[i] > 2)
            return false;
        if (deg[i] == 1)
            ones++;
    }
    if (ones != 2)
        return false;
    if (uf.size(0) != n)
        return false;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (solve())
        cout << "Yes\n";
    else
        cout << "No\n";
}