#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
  }
  vector<vector<int>> dp(2, vector<int>(n + 1));
  for (int j = 1; j <= n; j++) {
    {
      int now = 0;
      for (int x : a) {
        if (x <= j)
          now = max(now, dp[1][j - x] + x);
      }
      dp[0][j] = now;
    }
    {
      int now = INT_MAX;
      for (int x : a) {
        if (x <= j)
          now = min(now, dp[0][j - x]);
      }
      dp[1][j] = now;
    }
  }
  cout << dp[0][n] << '\n';
}