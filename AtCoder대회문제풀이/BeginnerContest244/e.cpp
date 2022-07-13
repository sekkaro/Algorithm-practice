#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define M 998244353

int mod(int x) { return ((x % M + M) % M); }
int add(int a, int b) { return mod(mod(a) + mod(b)); }

int dp[2005][2005][2];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, K, s, t, x;
  cin >> n >> m >> K >> s >> t >> x;
  --s;
  --t;
  --x;
  vector<vector<int>> to(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    to[u].push_back(v);
    to[v].push_back(u);
  }
  dp[0][s][0] = 1;
  for (int k = 0; k < K; k++) {
    for (int v = 0; v < n; v++) {
      for (int i = 0; i < 2; i++) {
        for (int u : to[v]) {
          int nk = k + 1, nv = u, ni = i;
          if (u == x)
            ni ^= 1;
          dp[nk][nv][ni] = add(dp[nk][nv][ni], dp[k][v][i]);
        }
      }
    }
  }
  cout << dp[K][t][0] << endl;
  return 0;
}