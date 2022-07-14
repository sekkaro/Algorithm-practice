#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char c;
      cin >> c;
      a[i][j] = c - '0';
    }
  }
  string ans = "";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < 8; k++) {
        int c = n, ti = i, tj = j;
        string now;
        while (c--) {
          now += to_string(a[ti][tj]);
          switch (k) {
          case 0:
            ti = (ti + 1) % n;
            break;
          case 1:
            ti = (ti > 0) ? (ti - 1) % n : n - 1;
            break;
          case 2:
            tj = (tj + 1) % n;
            break;
          case 3:
            tj = (tj > 0) ? (tj - 1) % n : n - 1;
            break;
          case 4:
            ti = (ti + 1) % n;
            tj = (tj + 1) % n;
            break;
          case 5:
            ti = (ti + 1) % n;
            tj = (tj > 0) ? (tj - 1) % n : n - 1;
            break;
          case 6:
            ti = (ti > 0) ? (ti - 1) % n : n - 1;
            tj = (tj + 1) % n;
            break;
          case 7:
            ti = (ti > 0) ? (ti - 1) % n : n - 1;
            tj = (tj > 0) ? (tj - 1) % n : n - 1;
            break;
          }
        }
        if (ans.compare(now) < 0)
          ans = now;
      }
    }
  }
  cout << ans << endl;
  return 0;
}