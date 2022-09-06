#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> s(n + 1);
  s[0] = 0;
  for (int i = 1; i <= n; i++) {
    s[i] = a[i - 1] + s[i - 1];
  }
  ll sum = 0;
  for (int i = 0; i < m; i++) {
    sum += (ll)a[i] * (i + 1);
  }
  ll ans = sum;
  for (int i = 1; i < n - m + 1; i++) {
    sum += ((ll)a[i + m - 1] * m) - (s[i + m - 1] - s[i - 1]);
    ans = max(ans, sum);
  }
  cout << ans << '\n';
  return 0;
}