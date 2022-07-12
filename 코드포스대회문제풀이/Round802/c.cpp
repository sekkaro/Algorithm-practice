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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll pref = 0, suf = 0;
    for (int i = 0; i < n - 1; i++) {
      ll d = a[i + 1] - a[i];
      if (d < 0)
        pref += -d;
      else
        suf += d;
    }
    cout << pref + suf + abs(a[0] - pref) << endl;
  }
  return 0;
}