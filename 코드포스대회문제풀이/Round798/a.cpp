#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    string ans;
    int i = 0, j = 0, ak = 0, bk = 0;
    while (i < n && j < m) {
      if ((a[i] < b[j] && ak < k) || bk >= k) {
        ak++;
        bk = 0;
        ans += a[i];
        i++;
      } else {
        bk++;
        ak = 0;
        ans += b[j];
        j++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}