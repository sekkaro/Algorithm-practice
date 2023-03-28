#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = n * (n + 1) / 2;
  for (int i = 1; i < n; i++) {
    ans += (a[i] != a[i - 1]) * i * (n - i);
  }
  while (m--) {
    int i;
    ll x;
    cin >> i >> x;
    i--;
    ans -= (i > 0 && a[i] != a[i - 1]) * i * (n - i);
    ans -= (i < n - 1 && a[i] != a[i + 1]) * (i + 1) * (n - (i + 1));
    a[i] = x;
    ans += (i > 0 && a[i] != a[i - 1]) * i * (n - i);
    ans += (i < n - 1 && a[i] != a[i + 1]) * (i + 1) * (n - (i + 1));
    cout << ans << '\n';
  }
  return 0;
}