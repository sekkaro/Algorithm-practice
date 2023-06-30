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
  int n;
  cin >> n;
  UnionFind uf(2 * n);
  map<string, int> sm;
  int val = 0;
  rep(i, n)
  {
    string s, t;
    cin >> s >> t;
    if (!sm.count(s))
    {
      sm[s] = val;
      val++;
    }
    if (!sm.count(t))
    {
      sm[t] = val;
      val++;
    }
    int u = sm[s], v = sm[t];
    if (uf.same(u, v))
    {
      cout << "No\n";
      return 0;
    }
    else
    {
      uf.unite(u, v);
    }
  }
  cout << "Yes\n";
  return 0;
}