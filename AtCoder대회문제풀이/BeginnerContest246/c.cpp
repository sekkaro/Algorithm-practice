#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b(n);
  ll c = 0, s = 0;
  for (int i = 0; i < n; i++) {
    b[i] = a[i] % x;
    c += a[i] / x;
    s += a[i];
  }
  if (c >= k) {
    s -= (ll)k * x;
  } else {
    s -= c * x;
    k -= c;
    k = min(k, n);
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < k; i++) {
      s -= b[i];
    }
  }
  cout << s << endl;
  return 0;
}