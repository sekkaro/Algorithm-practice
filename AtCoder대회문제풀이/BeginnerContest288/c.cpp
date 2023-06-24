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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    int ans = 0;
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        if (!uf.same(a, b))
        {
            uf.unite(a, b);
        }
        else
        {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}