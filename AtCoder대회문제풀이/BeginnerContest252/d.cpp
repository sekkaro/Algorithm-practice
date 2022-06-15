#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

ll dp[200005][4];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> am;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    am[a[i]]++;
  }
  vector<int> c;
  for (auto x : am) {
    c.push_back(x.second);
  }
  dp[0][0] = 1;
  for (int i = 0; i < c.size(); i++) {
    for (int j = 0; j < 4; j++) {
      dp[i + 1][j] = dp[i][j];
      if (j)
        dp[i + 1][j] += dp[i][j - 1] * c[i];
    }
  }
  cout << dp[c.size()][3] << endl;
  return 0;
}