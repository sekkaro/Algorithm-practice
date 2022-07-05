#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      m -= a;
    }
    if (m >= 0)
      cout << 0 << endl;
    else
      cout << -m << endl;
  }
  return 0;
}