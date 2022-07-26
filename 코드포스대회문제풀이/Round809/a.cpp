#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      --a[i];
    }
    string s;
    for (int i = 0; i < m; i++) {
      s += 'B';
    }
    for (int i = 0; i < n; i++) {
      if (a[i] < m - a[i] - 1) {
        if (s[a[i]] == 'B') {
          s[a[i]] = 'A';
        } else {
          s[m - a[i] - 1] = 'A';
        }
      } else {
        if (s[m - a[i] - 1] == 'B') {
          s[m - a[i] - 1] = 'A';
        } else {
          s[a[i]] = 'A';
        }
      }
    }
    cout << s << '\n';
  }
  return 0;
}