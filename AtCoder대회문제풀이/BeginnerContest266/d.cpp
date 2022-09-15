#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define M 100000

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> m(M + 5, vector<int>(5));
  for (int i = 0; i < n; i++) {
    int t, x, a;
    cin >> t >> x >> a;
    m[t][x] = a;
  }
  vector<vector<ll>> dp(M + 5, vector<ll>(5));
  dp[0][0] = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j <= min(i, 4); j++) {
      if (j)
        dp[i + 1][j - 1] = max(dp[i + 1][j - 1], dp[i][j] + m[i + 1][j - 1]);
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + m[i + 1][j]);
      if (j < 4)
        dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + m[i + 1][j + 1]);
    }
  }
  ll ans = 0;
  for (int j = 0; j < 5; j++) {
    ans = max(ans, dp[M][j]);
  }
  cout << ans << '\n';
  return 0;
}