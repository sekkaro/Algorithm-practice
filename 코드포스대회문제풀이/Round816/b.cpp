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
    ll k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> ans(n);
    for (int i = 0; i < n; i++) {
      if (i == 0)
        ans[i] = min(k * (b + 1) - 1, s);
      else
        ans[i] = min(k - 1, s);
      s -= ans[i];
    }
    if (ans[0] / k < b || s > 0)
      cout << -1 << '\n';
    else {
      for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}