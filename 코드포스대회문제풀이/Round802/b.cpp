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
    string s;
    cin >> n >> s;
    string ans;
    for (int i = 0; i < n; i++) {
      int num = s[i] - '0';
      ans += to_string(9 - num);
    }
    if (ans[0] == '0') {
      int cr = 0;
      for (int i = n - 1; i >= 0; i--) {
        int num = ans[i] - '0';
        int add = (i == n - 1) ? 2 : 1;
        if (cr + num + add > 9) {
          ans[i] = cr + num + add - 10 + '0';
          cr = 1;
        } else {
          ans[i] = cr + num + add + '0';
          cr = 0;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}