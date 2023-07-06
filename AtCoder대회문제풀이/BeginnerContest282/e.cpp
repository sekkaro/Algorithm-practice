#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using P = pair<int, int>;
using Edge = pair<int, P>;
using mint = modint;

int f(int x, int y)
{
    return (mint(x).pow(y) + mint(y).pow(x)).val();
}

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
    mint::set_mod(m);
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<Edge> edges;
    rep(i, n) rep(j, i) edges.emplace_back(f(a[i], a[j]), P(i, j));
    sort(edges.rbegin(), edges.rend());
    UnionFind uf(n);
    ll ans = 0;
    for (auto [d, e] : edges)
    {
        auto [u, v] = e;
        if (uf.same(u, v))
            continue;
        ans += d;
        uf.unite(u, v);
    }
    cout << ans << '\n';
    return 0;
}