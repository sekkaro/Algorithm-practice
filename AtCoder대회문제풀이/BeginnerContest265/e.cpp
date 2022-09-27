#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define M 998244353

int mod(int x) { return ((x % M + M) % M); }
int add(int a, int b) { return mod(mod(a) + mod(b)); }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<P> a(3);
  for (int i = 0; i < 3; i++) {
    cin >> a[i].first >> a[i].second;
  }
  set<P> s;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    s.emplace(x, y);
  }
  map<P, int> dp;
  dp[P(0, 0)] = 1;
  for (int i = 0; i < n; i++) {
    map<P, int> p;
    swap(dp, p);
    for (auto x : p) {
      for (int j = 0; j < 3; j++) {
        P nx = x.first;
        nx.first += a[j].first;
        nx.second += a[j].second;
        if (s.count(nx))
          continue;
        dp[nx] = add(dp[nx], x.second);
      }
    }
  }
  int ans = 0;
  for (auto x : dp) {
    ans = add(ans, x.second);
  }
  cout << ans << '\n';
  return 0;
}