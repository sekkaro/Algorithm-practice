#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

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
    vector<int> ans(n);
    auto check = [&](int m) {
      for (int i = 0; i < n; i++) {
        ans[i] = 0;
      }
      int qi = q;
      for (int i = 0; i < m; i++) {
        if (a[i] <= qi)
          ans[i] = 1;
      }
      for (int i = m; i < n; i++) {
        ans[i] = 1;
        if (qi == 0)
          return 0;
        if (a[i] > qi)
          --qi;
      }
      if (qi < 0)
        return 0;
      return 1;
    };
    int l = 0, r = n - 1;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (check(mid))
        r = mid - 1;
      else
        l = mid + 1;
    }
    check(r + 1);
    for (int i = 0; i < n; i++) {
      cout << ans[i];
    }
    cout << '\n';
  }
  return 0;
}