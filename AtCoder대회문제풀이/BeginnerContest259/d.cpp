#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
  vector<int> d;
  UnionFind(int n = 0) : d(n, -1) {}
  int find(int x) {
    if (d[x] < 0)
      return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
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

struct V {
  ll x, y;
  V(ll x = 0, ll y = 0) : x(x), y(y) {}
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  V s, t;
  cin >> s.x >> s.y >> t.x >> t.y;
  vector<V> o(n);
  vector<ll> r(n);
  for (int i = 0; i < n; i++) {
    cin >> o[i].x >> o[i].y >> r[i];
  }
  auto pow2 = [](ll x) { return x * x; };
  auto dist = [&](V a, V b) { return pow2(a.x - b.x) + pow2(a.y - b.y); };
  int si = 0, ti = 0;
  for (int i = 0; i < n; i++) {
    if (dist(s, o[i]) == pow2(r[i]))
      si = i;
    if (dist(t, o[i]) == pow2(r[i]))
      ti = i;
  }
  UnionFind uf(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      ll d = dist(o[i], o[j]);
      ll r1 = r[i], r2 = r[j];
      if (r1 > r2)
        swap(r1, r2);
      if (d > pow2(r1 + r2))
        continue;
      if (d < pow2(r2 - r1))
        continue;
      uf.unite(i, j);
    }
  }
  if (uf.same(si, ti))
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}