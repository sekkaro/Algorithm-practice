#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  queue<pair<int, int>> p;
  for (int i = 0; i < q; i++) {
    int n, x, c;
    cin >> n;
    if (n == 1) {
      cin >> x >> c;
      p.push(make_pair(x, c));
    } else {
      cin >> c;
      int sum = 0;
      while (c) {
        int cnt = p.front().second;
        if (c < cnt) {
          p.front().second = cnt - c;
          sum += p.front().first * c;
          break;
        } else {
          sum += p.front().first * cnt;
          c -= cnt;
          p.pop();
        }
      }
      cout << sum << endl;
    }
  }
  return 0;
}