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
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
      cin >> b[i];
    }
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j < n; j++) {
        if (a[j] > a[j + 1] || b[j] > b[j + 1]) {
          swap(a[j], a[j + 1]);
          swap(b[j], b[j + 1]);
          ans.push_back(make_pair(j, j + 1));
        }
      }
    }
    int ok = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] > a[i + 1] || b[i] > b[i + 1]) {
        ok = 0;
        break;
      }
    }
    if (!ok)
      cout << -1 << endl;
    else {
      cout << ans.size() << endl;
      for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
      }
    }
  }
  return 0;
}