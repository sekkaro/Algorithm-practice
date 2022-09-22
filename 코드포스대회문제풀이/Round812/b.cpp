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
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int ok = 1, dec = 0;
    for (int i = 1; i < n - 1; i++) {
      if (!dec && a[i] < a[i - 1])
        dec++;
      if (dec && a[i] < a[i + 1]) {
        ok = 0;
        break;
      }
    }
    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}