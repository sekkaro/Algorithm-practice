#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q, x;
  cin >> n >> q >> x;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  ll s = 0;
  for (int i = 0; i < n; i++) {
    s += w[i];
  }
  ll rd = x / s;
  ll rem = x % s;
  ll na = rd * n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    while (rem >= 1) {
      rem -= w[(i + na) % n];
      na++;
    }
    a[i] = na;
    rem += w[i];
    na--;
  }
  const int D = 41;
  vector<vector<int>> d(D, vector<int>(n));
  for (int i = 0; i < n; i++) {
    d[0][i] = (i + a[i]) % n;
  }
  for (int i = 0; i < D - 1; i++) {
    for (int j = 0; j < n; j++) {
      d[i + 1][j] = d[i][d[i][j]];
    }
  }
  for (int qi = 0; qi < q; qi++) {
    ll k;
    cin >> k;
    --k;
    int si = 0;
    for (int i = D - 1; i >= 0; i--) {
      if (k >> i & 1)
        si = d[i][si];
    }
    cout << a[si] << '\n';
  }
  return 0;
}