#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  ll t;
  cin >> n >> m >> t;
  vector<ll> a(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  vector<ll> ac(n);
  for (int i = 0; i < m; i++) {
    int x;
    ll y;
    cin >> x >> y;
    ac[x] = y;
  }
  int ok = 1;
  for (int i = 0; i < n - 1; i++) {
    if (ac[i + 1])
      t += ac[i + 1];
    t -= a[i];
    if (t <= 0) {
      ok = 0;
      break;
    }
  }
  if (ok)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}