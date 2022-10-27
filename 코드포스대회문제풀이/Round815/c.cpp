#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, sum = 0;
    cin >> n >> m;
    string s;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      cin >> s;
      for (int j = 0; j < m; j++) {
        a[i][j] = s[j] - '0';
        sum += a[i][j];
      }
    }
    int minn = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < m - 1; j++) {
        int cnt = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
        minn = min(minn, max(1, cnt - 1));
      }
    }
    if (sum == 0)
      cout << "0\n";
    else
      cout << sum - minn + 1 << '\n';
  }
  return 0;
}