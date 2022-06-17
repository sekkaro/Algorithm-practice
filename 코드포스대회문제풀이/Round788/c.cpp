#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define M 1000000007LL

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

ll mod(ll x) { return ((x % M + M) % M); }
ll mul(ll a, ll b) { return mod(mod(a) * mod(b)); }
ll modpow(ll a, ll b) {
  if (b == 0)
    return 1LL;
  if (b == 1)
    return a % M;
  ll res = 1;
  while (b) {
    if (b % 2 == 1)
      res = mul(res, a);
    a = mul(a, a);
    b = b / 2;
  }
  return res;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    UnionFind uf(n + 1);
    for (int i = 0; i < n; i++) {
      uf.unite(a[i], b[i]);
      if (a[i] == b[i])
        c[i] = a[i];
    }
    set<int> s;
    for (int i = 1; i <= n; i++) {
      s.insert(uf.find(i));
    }
    for (int i = 0; i < n; i++) {
      if (c[i]) {
        s.erase(uf.find(c[i]));
      }
    }
    cout << modpow(2, s.size()) << endl;
  }
  return 0;
}