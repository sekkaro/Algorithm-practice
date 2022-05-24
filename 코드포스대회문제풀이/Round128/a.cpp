#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int ans = l1 + l2;
    for (int i = l1; i <= r1; i++) {
      for (int j = l2; j <= r2; j++) {
        if (i == j)
          ans = min(ans, i);
      }
    }
    cout << ans << endl;
  }
  return 0;
}