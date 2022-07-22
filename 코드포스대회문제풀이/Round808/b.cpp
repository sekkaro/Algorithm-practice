#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> ans(n + 1);
    int ok = 1;
    for (int i = 1; i <= n; i++) {
      if (l % i)
        ans[i] = l + (i - (l % i));
      else
        ans[i] = l;
      if (ans[i] > r) {
        ok = 0;
        break;
      }
    }
    if (ok) {
      cout << "YES\n";
      for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
      }
      cout << '\n';
    } else
      cout << "NO\n";
  }
  return 0;
}