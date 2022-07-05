#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

const int mod = 998244353;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> dp(n + 1, vector<int>(k + 1));
  dp[0][0] = 1;
  for (int x = 1; x <= n; x++) {
    for (int y = 0; y <= k; y++) {
      int now = 0;
      for (int i = 1; i <= m; i++) {
        if (y - i >= 0) {
          now += dp[x - 1][y - i];
          now %= mod;
        }
      }
      dp[x][y] = now;
    }
  }
  int ans = 0;
  for (int y = 0; y <= k; y++) {
    ans += dp[n][y];
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}