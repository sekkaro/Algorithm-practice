#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  while (q--) {
    int n;
    string s, t;
    cin >> n >> s >> t;
    int bs = 0, bt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'b')
        bs++;
      if (t[i] == 'b')
        bt++;
    }
    if (bs != bt) {
      cout << "NO\n";
      continue;
    }
    int j = 0, ok = 1;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'b')
        continue;
      while (t[j] == 'b') {
        j++;
      }
      if (t[j] != s[i] || (s[i] == 'a' && i > j) || (s[i] == 'c' && i < j)) {
        ok = 0;
        break;
      }
      j++;
    }
    if (!ok)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}