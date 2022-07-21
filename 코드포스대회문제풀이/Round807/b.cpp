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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll ans = 0;
    int ok = 0;
    for (int i = 0; i < n - 1; i++) {
      ans += a[i];
      if (!ok && a[i] > 0)
        ok = 1;
      if (ok && !a[i])
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}