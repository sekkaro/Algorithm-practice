#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, prev = s[0] - '0', cnt = 1;
    for (int i = 1; i < s.length(); i++) {
      int curr = s[i] - '0';
      if (++cnt % 2 == 0 && curr != prev) {
        ans++;
        cnt = 0;
      } else {
        prev = curr;
      }
    }
    cout << ans << endl;
  }
  return 0;
}