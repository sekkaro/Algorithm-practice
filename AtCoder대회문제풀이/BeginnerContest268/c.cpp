#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> cnt(n);
  for (int i = 0; i < n; i++) {
    int j = (a[i] - i - 1 + n) % n;
    for (int k = 0; k < 3; k++) {
      cnt[(j + k) % n]++;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, cnt[i]);
  }
  cout << ans << '\n';
  return 0;
}