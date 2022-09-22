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
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i] >> y[i];
    }
    int maxx = 0, minx = 0, maxy = 0, miny = 0;
    for (int i = 0; i < n; i++) {
      maxx = max(maxx, x[i]);
      minx = min(minx, x[i]);
      maxy = max(maxy, y[i]);
      miny = min(miny, y[i]);
    }
    cout << ((maxx - minx) + (maxy - miny)) * 2 << '\n';
  }
  return 0;
}