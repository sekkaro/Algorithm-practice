#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> r;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        char c;
        cin >> c;
        if (c == 'R') {
          r.push_back(make_pair(i, j));
        }
      }
    }
    string ans = "YES";
    for (int i = 1; i < r.size(); i++) {
      if (r[i].first > r[0].first && r[i].second < r[0].second) {
        ans = "NO";
        break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}