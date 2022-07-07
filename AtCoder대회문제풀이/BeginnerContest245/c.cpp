#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  vector<vector<bool>> dp(n, vector<bool>(2));
  dp[0][0] = dp[0][1] = 1;
  for (int i = 1; i < n; i++) {
    dp[i][0] = ((dp[i - 1][0] && abs(a[i] - a[i - 1]) <= k) ||
                (dp[i - 1][1] && abs(a[i] - b[i - 1]) <= k))
                   ? 1
                   : 0;
    dp[i][1] = ((dp[i - 1][0] && abs(b[i] - a[i - 1]) <= k) ||
                (dp[i - 1][1] && abs(b[i] - b[i - 1]) <= k))
                   ? 1
                   : 0;
  }
  if (dp[n - 1][0] || dp[n - 1][1])
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}