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
    int ok = 0;
    for (int i = 0; i < n; i++) {
      int m = 0;
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        m += a[j];
      }
      if (1.0 * m / (n - 1) == a[i]) {
        ok = 1;
        break;
      }
    }
    if (ok)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}