#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> m;
    vector<vector<ll>> a(2, vector<ll>(m));
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        a[i][j]++;
      }
    }
    a[0][0] = 0;
    vector<ll> clk(m), aclk(m);
    clk[m - 1] = max(a[0][m - 1] + 1, a[1][m - 1]);
    aclk[m - 1] = max(a[0][m - 1], a[1][m - 1] + 1);
    ll cells = 2;
    for (int i = m - 2; i >= 0; i--) {
      cells += 2;
      clk[i] = max(clk[i + 1] + 1, max(a[0][i] + cells - 1, a[1][i]));
      aclk[i] = max(aclk[i + 1] + 1, max(a[0][i], a[1][i] + cells - 1));
    }
    ll ans = LONG_LONG_MAX, curr = -1;
    for (int i = 0; i < m; i++, cells -= 2) {
      if (i % 2 == 0) {
        ans = min(ans, max(clk[i], curr + cells));
        curr = max(curr + 1, a[0][i]);
        curr = max(curr + 1, a[1][i]);
      } else {
        ans = min(ans, max(aclk[i], curr + cells));
        curr = max(curr + 1, a[1][i]);
        curr = max(curr + 1, a[0][i]);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}