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
    int x = 0, y = 0, L = -1;
    for (int i = 0; i < n; i += 2) {
      if (s[i] != s[i + 1])
        x++;
      else {
        if (L != s[i])
          y++;
        L = s[i];
      }
    }
    cout << x << " " << max(y, 1) << endl;
  }
  return 0;
}