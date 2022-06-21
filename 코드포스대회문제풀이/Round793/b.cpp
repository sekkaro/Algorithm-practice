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
    vector<int> p(n);
    int ans = -1;
    for (int i = 0; i < n; i++) {
      cin >> p[i];
      if (i != p[i]) {
        if (ans == -1)
          ans = p[i];
        else
          ans &= p[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}