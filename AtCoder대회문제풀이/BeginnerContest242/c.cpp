#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

#define M 998244353LL

int mod(int x) { return ((x % M + M) % M); }
int add(int a, int b) { return mod(mod(a) + mod(b)); }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> dp(n + 1, vector<int>(10));
  for (int i = 1; i <= 9; i++) {
    dp[1][i] = 1;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= 9; j++) {
      dp[i][j] = add(dp[i][j], dp[i - 1][j]);
      if (j > 1)
        dp[i][j] = add(dp[i][j], dp[i - 1][j - 1]);
      if (j < 9)
        dp[i][j] = add(dp[i][j], dp[i - 1][j + 1]);
    }
  }
  int ans = 0;
  for (int i = 1; i <= 9; i++) {
    ans = add(ans, dp[n][i]);
  }
  cout << ans << endl;
  return 0;
}