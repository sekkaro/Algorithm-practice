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
    ll ans = 0;
    for (int i = 1; i < m; i++) {
      ans += i;
    }
    for (int i = 1; i <= n; i++) {
      ans += i * m;
    }
    cout << ans << endl;
  }
  return 0;
}