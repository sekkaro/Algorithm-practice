#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    if (k == 1) {
      ans = ceil(1.0 * (n - 2) / 2);
    } else {
      for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] + a[i + 1])
          ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}