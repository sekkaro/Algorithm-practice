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
    vector<int> a(m), cnt(n);
    for (int i = 0; i < m; i++) {
      cin >> a[i];
      --a[i];
      cnt[a[i]]++;
    }
    auto check = [&](int t) {
      ll fr = 0, need = 0;
      for (int i = 0; i < n; i++) {
        if (cnt[i] > t) {
          need += (cnt[i] - t);
        } else {
          fr += (t - cnt[i]) / 2;
        }
      }
      return need <= fr;
    };
    int l = 0, r = m * 2, ans = -1;
    while (l <= r) {
      int m = (l + r) / 2;
      if (check(m)) {
        ans = m;
        r = m - 1;
      } else {
        l = m + 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}