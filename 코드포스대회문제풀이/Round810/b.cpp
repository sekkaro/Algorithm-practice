#include <bits/stdc++.h>
using namespace std;

#define M 100005

int a[M], x[M], y[M], deg[M];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
      deg[i] = 0;
      cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
      cin >> x[i] >> y[i];
      deg[x[i]]++;
      deg[y[i]]++;
    }
    if (m % 2 == 0)
      cout << 0 << '\n';
    else {
      int ans = INT_MAX;
      for (int i = 1; i <= n; i++) {
        if (deg[i] % 2 == 1)
          ans = min(ans, a[i]);
      }
      for (int i = 1; i <= m; i++) {
        if (deg[x[i]] % 2 == 0 && deg[y[i]] % 2 == 0)
          ans = min(ans, a[x[i]] + a[y[i]]);
      }
      cout << ans << '\n';
    }
  }
  return 0;
}