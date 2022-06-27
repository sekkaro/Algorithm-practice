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
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      cnt[a[i]]++;
    }
    int ok = 1;
    for (auto x : cnt) {
      if (x.second < 2) {
        ok = 0;
        break;
      }
    }
    if (!ok) {
      cout << -1 << endl;
      continue;
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      ans[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1])
        swap(ans[i], ans[i + 1]);
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}