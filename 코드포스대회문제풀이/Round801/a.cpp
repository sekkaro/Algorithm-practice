#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int MAX = -1e9, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        if (a[i][j] > MAX) {
          x = i;
          y = j;
          MAX = a[i][j];
        }
      }
    }
    cout << max(n - x, x + 1) * max(m - y, y + 1) << endl;
  }
  return 0;
}