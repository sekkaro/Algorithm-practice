#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    auto get = [&](int i) {
      return max(0, max(h[i - 1], h[i + 1]) - h[i] + 1);
    };
    if (n & 1) {
      ll ans = 0;
      for (int i = 1; i < n - 1; i += 2) {
        ans += get(i);
      }
      cout << ans << '\n';
      continue;
    }
    ll tot = 0;
    for (int i = 1; i < n - 1; i += 2) {
      tot += get(i);
    }
    ll ans = tot;
    for (int i = n - 2; i > 0; i -= 2) {
      tot -= get(i - 1);
      tot += get(i);
      ans = min(ans, tot);
    }
    cout << ans << '\n';
  }
  return 0;
}