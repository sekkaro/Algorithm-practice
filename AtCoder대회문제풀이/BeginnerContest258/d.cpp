#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  ll s = 0;
  ll ans = LONG_LONG_MAX;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    s += a + b;
    if (x - i - 1 >= 0) {
      ans = min(ans, s + (ll)(x - i - 1) * b);
    }
  }
  cout << ans << endl;
  return 0;
}