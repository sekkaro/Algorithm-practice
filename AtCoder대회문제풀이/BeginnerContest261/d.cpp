#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> x(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
  }
  vector<int> cy(n + 1);
  for (int i = 0; i < m; i++) {
    int c, y;
    cin >> c >> y;
    cy[c] = y;
  }
  vector<vector<ll>> dp(n + 5, vector<ll>(n + 5, -1e18));
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      if (j > 0)
        dp[i][j] = dp[i - 1][j - 1] + x[i] + cy[j];
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][j]);
    }
  }
  ll ans = 0;
  for (int i = 0; i <= n; i++) {
    ans = max(ans, dp[n][i]);
  }
  cout << ans << '\n';
  return 0;
}