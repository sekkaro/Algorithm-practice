#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    vector<vector<int>> pos(n + 1);
    for (int i = 0; i < n; i++) {
      pos[c[i]].push_back(i);
    }
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < pos[i].size(); j++) {
        if (j == 0) {
          ans[i]++;
          continue;
        }
        if ((pos[i][j] - pos[i][j - 1]) % 2 == 1)
          ans[i]++;
      }
    }
    for (int i = 1; i <= n; i++) {
      cout << ans[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}