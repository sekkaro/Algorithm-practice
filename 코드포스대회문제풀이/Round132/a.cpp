#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    vector<int> a(4), cnt(4, 0);
    for (int i = 1; i <= 3; i++) {
      cin >> a[i];
    }
    while (x) {
      cnt[x]++;
      x = a[x];
    }
    int ok = 1;
    for (int i = 1; i <= 3; i++) {
      if (!cnt[i]) {
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