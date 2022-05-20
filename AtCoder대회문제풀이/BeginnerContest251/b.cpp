#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> s;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] <= w && !s.count(a[i])) {
      ans++;
      s.insert(a[i]);
    }
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] <= w && !s.count(a[i] + a[j])) {
        ans++;
        s.insert(a[i] + a[j]);
      }
      for (int k = j + 1; k < n; k++) {
        if (a[i] + a[j] + a[k] <= w && !s.count(a[i] + a[j] + a[k])) {
          ans++;
          s.insert(a[i] + a[j] + a[k]);
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}