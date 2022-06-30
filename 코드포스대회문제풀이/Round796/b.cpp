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
    vector<int> a(n);
    int o = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 != 0)
        o++;
    }
    if (o) {
      cout << n - o << endl;
    } else {
      int ans = 2e5;
      for (int i = 0; i < n; i++) {
        int x = a[i], now = 0;
        while (x % 2 == 0) {
          x /= 2;
          now++;
        }
        ans = min(ans, now);
      }
      cout << ans + n - 1 << endl;
    }
  }
  return 0;
}