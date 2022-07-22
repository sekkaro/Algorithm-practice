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
    vector<int> b = a;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        b[j] %= a[i];
      }
    }
    int ok = 1;
    for (int i = 1; i < n; i++) {
      if (b[i]) {
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