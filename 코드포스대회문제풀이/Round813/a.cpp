#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    int ans = 0;
    for (int i = 0; i < k; i++) {
      if (p[i] > k)
        ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}