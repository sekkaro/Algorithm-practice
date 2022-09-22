#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;

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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<P> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i].first >> p[i].second;
  }
  map<P, int> mp;
  for (int i = 0; i < n; ++i) {
    mp[p[i]] = i;
  }
  UnionFind uf(n);
  for (int i = 0; i < n; ++i) {
    int x = p[i].first;
    int y = p[i].second;
    auto check = [&](P p) {
      if (mp.count(p)) {
        uf.unite(i, mp[p]);
      }
    };
    check(P(x + 1, y));
    check(P(x, y + 1));
    check(P(x + 1, y + 1));
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (uf.find(i) == i)
      ans++;
  }
  cout << ans << '\n';
  return 0;
}