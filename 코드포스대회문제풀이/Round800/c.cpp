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
    vector<int> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s += a[i];
    }
    if (s != 0) {
      cout << "No\n";
    } else {
      int ok = 1, visited_zero = 0;
      s = 0;
      for (int i = 0; i < n; i++) {
        s += a[i];
        if (s < 0 || (s > 0 && visited_zero)) {
          ok = 0;
          break;
        }
        if (s == 0)
          visited_zero = 1;
      }
      if (ok)
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
  return 0;
}