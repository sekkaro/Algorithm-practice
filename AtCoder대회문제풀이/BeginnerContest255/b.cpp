#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  vector<double> d(n);
  for (int i = 0; i < n; i++) {
    d[i] = 1e18;
    for (int j = 0; j < k; j++) {
      double dx = x[i] - x[a[j]];
      double dy = y[i] - y[a[j]];
      double dist = sqrt((dx * dx) + (dy * dy));
      d[i] = min(d[i], dist);
    }
  }
  double ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, d[i]);
  }
  cout << setprecision(17);
  cout << ans << endl;
  return 0;
}