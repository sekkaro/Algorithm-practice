#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  multiset<ll> s;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      ll x;
      cin >> x;
      s.insert(x);
    } else {
      ll x;
      int k;
      cin >> x >> k;
      ll ans = -1;
      if (t == 2) {
        auto it = s.upper_bound(x);
        int ok = 1;
        for (int i = 0; i < k; i++) {
          if (it == s.begin()) {
            ok = 0;
            break;
          }
          --it;
        }
        if (ok)
          ans = *it;
      } else {
        auto it = s.lower_bound(x);
        int ok = 1;
        for (int i = 0; i < k - 1; i++) {
          if (it == s.end()) {
            ok = 0;
            break;
          }
          ++it;
        }
        if (ok && it != s.end())
          ans = *it;
      }
      cout << ans << '\n';
    }
  }
  return 0;
}