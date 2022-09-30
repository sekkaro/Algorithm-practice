#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<vector<int>> b(n + 1);
    int i = 0, j = 1, r = 1;
    while (a[i] != n && a[j] != n) {
      if (a[i] > a[j]) {
        b[a[i]].push_back(r);
        j = max(i + 1, j + 1);
      } else {
        b[a[j]].push_back(r);
        i = max(i + 1, j + 1);
      }
      r++;
    }
    for (int qi = 0; qi < q; qi++) {
      int i, k;
      cin >> i >> k;
      --i;
      if (k < r) {
        if (b[a[i]].size() == 0 || b[a[i]][0] > k)
          cout << "0\n";
        else if (b[a[i]][b[a[i]].size() - 1] < k)
          cout << b[a[i]].size() << '\n';
        else {
          int ans =
              find(b[a[i]].begin(), b[a[i]].end(), k) - b[a[i]].begin() + 1;
          cout << ans << '\n';
        }
      } else {
        if (a[i] == n)
          cout << k - r + 1 << '\n';
        else
          cout << b[a[i]].size() << '\n';
      }
    }
  }
  return 0;
}