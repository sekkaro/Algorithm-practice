#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    int wc = k, ac = 0;
    string ans = "NO";
    while (wc >= 0) {
      if (ceil(1.0 * (hc + (a * ac)) / dm) >=
          ceil(1.0 * hm / (dc + (w * wc)))) {
        ans = "YES";
        break;
      }
      ac++;
      wc--;
    }
    cout << ans << endl;
  }
  return 0;
}